#include <kosSyst.h>
#include <kosFile.h>
#include "images.hpp"

//Global const variables
const char header[] = "Flappy bird";
const char controlString[] = "SPACEBAR TO JUMP";
const char gameOverString[] = "GAMEOVER";
const char anyKeyString[] = "Press any key for restart";
const int windowWidth = 400;
const int windowHeight = 400;
const int loopDelay = 1;

class Bird
{
public:
	static const int sizeX = 17;
	static const int sizeY = 12;
	static const int x = 100;
	int y;
	int acceleration;

	inline void move()
	{
		if (acceleration <= 30)
			acceleration += 2;
		y += acceleration / 10;
	}

	inline void jump()
	{
		acceleration = -50;
	}

	void draw()
	{
		kos_PutImage(birdImage, sizeX, sizeY, x, y);
	}
};

class Tube
{
public:
	static const int width = 50;
	static const int gapHeight = 100;
	static const int headHeight = 18;
	int x;
	int gapY;

	inline void randomize()
	{
		x = windowWidth + 1;
		gapY = rtlRand() % 200 + 50;
	}

	inline void move()
	{
		x -= 2;
		if (x < -50)
			randomize();
	}

	void draw()
	{
		int offset = x >= 0 ? 0 : -x;

		//top
		for (int y = 0; y < gapY - headHeight; ++y)
			kos_PutImage(tubeBodyImage + offset, width - offset, 1, x + offset, y);
		//head top
		for (int y = gapY - headHeight; y < gapY; ++y)
			kos_PutImage(tubeHeadImage + width * (y - (gapY - headHeight)) + offset, width - offset, 1, x + offset, y);
		//head down
		for (int y = gapY + gapHeight; y < gapY + gapHeight + headHeight; ++y)
			kos_PutImage(tubeHeadImage + width * (y - (gapY + gapHeight)) + offset, width - offset, 1, x + offset, y);
		//down
		for (int y = gapY + gapHeight + headHeight; y < windowHeight; ++y)
			kos_PutImage(tubeBodyImage + offset, width - offset, 1, x + offset, y);
	}
};

//Global variables
bool gameStarted = false;
char scoreString[] = "Score:    ";
int score;
Bird bird;
int tubeNumber;
Tube tubes[3];

//Function prototypes
void kos_Main();
void drawGameWindow(); 
void drawGameoverWindow();
void startGame();
inline bool checkAddScore(Tube tube);
inline bool checkCollision(Tube tube);
inline void updateScoreString();

//Functions

void startGame()
{
	bird.y = windowHeight / 2;
	bird.acceleration = 0;
	score = 0;
	updateScoreString();
	tubeNumber = 1;
	tubes[0].randomize();
	gameStarted = true;
}

void kos_Main()
{
	rtlSrand( kos_GetSystemClock() );

	startGame();

	while( true )
	{
		if (gameStarted)
		{
			kos_Pause(loopDelay);

			bird.move();

			if ((tubeNumber == 1 || tubeNumber == 2) && (tubes[tubeNumber - 1].x < (windowWidth - windowWidth / 3)))
				tubes[tubeNumber++].randomize();

			//Process all tubes
			bool scoreChanged = false;
			for (int i = 0; i < tubeNumber; ++i)
			{
				//Adding score
				if (checkAddScore(tubes[i]))
				{
					++score;
					scoreChanged = true;
				}

				//Check collision with bird
				if( checkCollision(tubes[i]) )
				{
					gameStarted = false;
					continue;
				}

				//Move tube
				tubes[i].move();
			}

			if (scoreChanged)
				updateScoreString();

			if (bird.y + bird.sizeY > windowHeight || bird.y < 0)
			{
				gameStarted = false;
				continue;
			}
			drawGameWindow();

			switch (kos_CheckForEvent())
			{
			case 1:
				drawGameWindow();
				break;

			case 2: // key pressed
				Byte keyCode;
				kos_GetKey(keyCode);
				if (keyCode == 32) //if pressed key is spacebar
					bird.jump();
				break;

			case 3: // button pressed; we have only one button, close
				kos_ExitApp();
			}
		}
		else
		{
			drawGameoverWindow();

			switch (kos_WaitForEvent())
			{
			case 1:
				drawGameoverWindow();
				break;

			case 2:
				startGame();
				break;

			case 3:
				kos_ExitApp();
			}
		}
	}
}

void drawGameWindow()
{
	kos_WindowRedrawStatus(1);
	kos_DefineAndDrawWindow(10, 40, windowWidth, windowHeight, 0x33, 0x00FFFF, 0, 0, (Dword)header);
	bird.draw();
	for (int i = 0; i < tubeNumber; ++i)
		tubes[i].draw();
	kos_WriteTextToWindow(10, 10, 0x81, 0x000000, scoreString, 0);
	kos_WriteTextToWindow(10, 30, 0x81, 0x000000, controlString, 0);
	kos_WindowRedrawStatus(2);
}

void drawGameoverWindow()
{
	kos_WindowRedrawStatus(1);
	kos_DefineAndDrawWindow(10, 40, windowWidth, windowHeight, 0x33, 0x000000, 0, 0, (Dword)header);
	kos_WriteTextToWindow(125, 50, 0x82, 0xFFFFFF, gameOverString, 0);
	kos_WriteTextToWindow(135, 100, 0x81, 0xFFFFFF, scoreString, 0);
	kos_WriteTextToWindow(50, 150, 0x081, 0xFFFFFF, anyKeyString, 0);
	kos_WindowRedrawStatus(2);
}

inline bool checkCollision(Tube tube)
{
	return ((tube.x <= (bird.x + bird.sizeX) && tube.x + tube.width >= bird.x) && (bird.y <= tube.gapY || bird.y + bird.sizeY >= tube.gapY + tube.gapHeight));
}

inline bool checkAddScore(Tube tube)
{
	int diff = bird.x - (tube.x + tube.width);
	return diff == 0 || diff == 1;
}

inline void updateScoreString()
{
	//Clear score string
	for (int i = 6; i <= 8; ++i)
		scoreString[i] = ' ';

	//Build new string
	int temp = score;
	int index = 9;
	do
	{
		int n = temp % 10;
		scoreString[index] = n + 48;
		--index;
		temp /= 10;
	} while (temp > 0);
}