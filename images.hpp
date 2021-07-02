#include <kosSyst.h>

static RGB birdImage[] = {
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0xFFFFFF, 0x000000, 0x00FFFF,
0x000000, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000, 0xFFFFFF, 0x000000, 0x00FFFF,
0x000000, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000, 0x00FFFF,
0x000000, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x00FFFF,
0x00FFFF, 0x000000, 0xE0E080, 0xE0E080, 0xE0E080, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xE02000, 0xE02000, 0xE02000, 0xE02000, 0xE02000, 0x000000,
0x00FFFF, 0x00FFFF, 0x000000, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xE02000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,
0x00FFFF, 0x00FFFF, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0xE02000, 0xE02000, 0xE02000, 0xE02000, 0xE02000, 0x000000,
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x000000, 0x000000, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0xFFFF00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x00FFFF,
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF
};

static RGB tubeBodyImage[] = {
0x00FFFF, 0x00FFFF, 0x000000, 0x608040, 0x80E040, 0xE0E080, 0xA0E040, 0xA0E040, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x80E040, 0x60A000, 0x60A000, 0x80E040, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x40A000, 0x60A000, 0x408000, 0x408000, 0x204000, 0x60A000, 0x408000, 0x408000, 0x204000, 0x206000, 0x204000, 0x200040, 0x00FFFF, 0x00FFFF
};

static RGB tubeHeadImage[] = {
0x200040, 0x200040, 0x200040, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x00FFFF, 0x00FFFF,
0x402000, 0x408000, 0x408000, 0x608040, 0x80A040, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xA0C040, 0x60A040, 0x60A040, 0xA0C080, 0xA0C080, 0x60A040, 0x60A040, 0x80A040, 0x60A040, 0x60A040, 0x60A040, 0x60A040, 0x60A040, 0x80A040, 0x80A040, 0x80A040, 0x80A040, 0x608000, 0x406000, 0x204000, 0x204000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402000, 0x60C000, 0x60C000, 0x80C040, 0xA0E040, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xE0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0x80C040, 0x80C040, 0xC0E080, 0xC0E080, 0x80C040, 0x80C040, 0x80E040, 0x80C040, 0x80C040, 0x80E040, 0x80E040, 0x80E040, 0x80C040, 0x80C040, 0x80C040, 0x80E040, 0x60A000, 0x408000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x40A000, 0x60A000, 0x60A000, 0x80E040, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x204000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x206000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x40A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80E040, 0x80E040, 0x80E040, 0x80E040, 0x60A000, 0x60C000, 0x60C000, 0xA0E040, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402000, 0x408000, 0x408000, 0x608000, 0x608040, 0x408000, 0x408000, 0x408000, 0x408000, 0x406000, 0x408000, 0x408000, 0x408000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x206000, 0x206000, 0x206000, 0x406000, 0x206000, 0x206000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x402000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x206000, 0x206000, 0x402000, 0x00FFFF, 0x00FFFF,
0x200040, 0x200040, 0x200040, 0x200040, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x200040, 0x200040, 0x000000, 0x000000, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x00FFFF, 0x00FFFF,

};