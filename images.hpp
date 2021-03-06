#pragma once

#include <kosSyst.h>

static RGB birdImage[] = {
0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0xC08040, 0xC08040, 0xC08040, 0x608080, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x40C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0xC08040, 0xE0C080, 0xC08040, 0xE0C080, 0x806040, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC0DCC0, 0xA06040, 0x80C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x80C0C0, 0xE0A040, 0xE0E080, 0xE0C080, 0xE0E080, 0x806040, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC08040, 0xE0C080, 0xA06040, 0x20C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0xC06040, 0xE0C080, 0xC0A080, 0xC0A080, 0xA0A080, 0x806040, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC08040, 0xE0C080, 0xE0E080, 0xA06040, 0x20C0C0, 0x00FFFF, 0x00FFFF, 0xA06040, 0xC08040, 0x800040, 0x800040, 0xE02080, 0xE060C0, 0x40C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xA06040, 0xC08040, 0xE0E080, 0xC0DCC0, 0xA06040, 0x20C0C0, 0x20C0C0, 0xC06040, 0x808080, 0xE02080, 0xE020C0, 0xE02080, 0xE0A0C0, 0x804080, 0x40C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC08040, 0xE0A040, 0xE0C080, 0xE0E080, 0xFFFBF0, 0x806040, 0xC06040, 0xC0DCC0, 0x800040, 0xE040C0, 0xE040C0, 0x002040, 0xE0E080, 0xA0A080, 0x404040, 0x404040, 0x806080, 0x806080, 0xA08080,
0xA06040, 0xE0A040, 0xC08040, 0xE0C080, 0xFFFBF0, 0xC0DCC0, 0xA06040, 0xC0DCC0, 0xE020C0, 0xE0C080, 0xE0C080, 0xE0E080, 0xE0E000, 0xA0A0A4, 0xC0A080, 0x20A080, 0x40A0C0, 0x40A0C0, 0x60C0C0,
0x20C0C0, 0xA06040, 0xE0A040, 0xC08040, 0xE0C040, 0xFFFBF0, 0xC0C080, 0x80A040, 0xC00080, 0xFFFF00, 0xFFFF00, 0xE0E080, 0xC0A040, 0xA0A080, 0x60A080, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x80A080, 0xC08040, 0xE0A040, 0xE0A040, 0xE0C080, 0xFFFBF0, 0xC0C0C0, 0xE0C040, 0xE0E040, 0xC0E000, 0xC0C080, 0xA0A080, 0xC0C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x40C0C0, 0x80A080, 0xE0A040, 0xE0C080, 0xE0C040, 0xE0E080, 0x80E080, 0xC0E000, 0xE0E080, 0xE0E080, 0xE0E080, 0xC0A080, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x00FFFF, 0x00FFFF, 0x40C0C0, 0xA06040, 0xA0C040, 0xA0A040, 0xA0C080, 0xC0E000, 0xC0E000, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0x40C080, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x60E080, 0xC0DCC0, 0x00FFFF, 0x80C0C0, 0x606080, 0x606080, 0xA0E040, 0xC0E000, 0xE0E000, 0xE0E080, 0xE0E080, 0xE0E080, 0xC0C040, 0x60A040, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC0E080, 0xC0C000, 0xE0E000, 0xC0DCC0, 0x80A040, 0xA0E040, 0xA0C040, 0xC0E000, 0xE0E080, 0xE0E080, 0xE0E080, 0xC0E000, 0xC0C000, 0x60A040, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xA0A0A4, 0xA0A080, 0xA0E040, 0xC0E000, 0x80A080, 0xA0C040, 0xC0E000, 0xE0E040, 0xE0E080, 0xE0E080, 0xC0E000, 0xA0E040, 0x808040, 0x20C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xC0E080, 0xE0E000, 0xA0A080, 0x80A080, 0xA0C040, 0xE0E040, 0xE0E040, 0xE0E040, 0xC0E040, 0xC0E000, 0xA0E040, 0x808040, 0xA0C080, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x80A080, 0xA0C000, 0xC0E000, 0xA0E040, 0xA0C040, 0xC0E000, 0xC0E000, 0xC0E000, 0xC0E000, 0xA0E040, 0x80A040, 0x80C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xA0C000, 0x6080C0, 0xA0C040, 0xC0E000, 0xC0E000, 0xC0E000, 0xC0E000, 0xA0C040, 0x80A040, 0x808040, 0xA0C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0x80A080, 0xA0C080, 0xC0E000, 0xA0E040, 0xC0E040, 0x808040, 0x808040, 0x808040, 0xA0C0C0, 0x20C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF,
0xA0E080, 0x808040, 0xA0A040, 0x808040, 0x808040, 0x80C0C0, 0xA0C0C0, 0x20C0C0, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF, 0x00FFFF
};

static RGB tubeBodyImage[] = {
0x00FFFF, 0x00FFFF, 0x000000, 0x608040, 0x80E040, 0xE0E080, 0xA0E040, 0xA0E040, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x80E040, 0x60A000, 0x60A000, 0x80E040, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x40A000, 0x60A000, 0x408000, 0x408000, 0x204000, 0x60A000, 0x408000, 0x408000, 0x204000, 0x206000, 0x204000, 0x200040, 0x00FFFF, 0x00FFFF
};

static RGB tubeHeadImage[] = {
0x200040, 0x200040, 0x200040, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040,
0x402000, 0x408000, 0x408000, 0x608040, 0x80A040, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xC0C080, 0xA0C040, 0x60A040, 0x60A040, 0xA0C080, 0xA0C080, 0x60A040, 0x60A040, 0x80A040, 0x60A040, 0x60A040, 0x60A040, 0x60A040, 0x60A040, 0x80A040, 0x80A040, 0x80A040, 0x80A040, 0x608000, 0x406000, 0x204000, 0x204000, 0x402000,
0x402000, 0x60C000, 0x60C000, 0x80C040, 0xA0E040, 0xE0E080, 0xE0E080, 0xE0E080, 0xE0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xE0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0xC0E080, 0x80C040, 0x80C040, 0xC0E080, 0xC0E080, 0x80C040, 0x80C040, 0x80E040, 0x80C040, 0x80C040, 0x80E040, 0x80E040, 0x80E040, 0x80C040, 0x80C040, 0x80C040, 0x80E040, 0x60A000, 0x408000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x40A000, 0x60A000, 0x60A000, 0x80E040, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x204000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x206000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x60A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80C040, 0x80C040, 0x80C040, 0x80C040, 0x40A000, 0x60A000, 0x60A000, 0x80E040, 0x60A000, 0x40A000, 0x60A000, 0x60A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x40A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402040, 0x80E040, 0x80E040, 0xC0E080, 0xE0E080, 0x80E040, 0x80E040, 0x80E040, 0x80E040, 0x60A000, 0x60C000, 0x60C000, 0xA0E040, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x60A000, 0x206000, 0x406000, 0x406000, 0x60A000, 0x206000, 0x204000, 0x206000, 0x206000, 0x402000,
0x402000, 0x408000, 0x408000, 0x608000, 0x608040, 0x408000, 0x408000, 0x408000, 0x408000, 0x406000, 0x408000, 0x408000, 0x408000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x406000, 0x206000, 0x206000, 0x206000, 0x406000, 0x206000, 0x206000, 0x206000, 0x206000, 0x402000,
0x402000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x204000, 0x206000, 0x206000, 0x402000,
0x200040, 0x200040, 0x200040, 0x200040, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x200040, 0x200040, 0x000000, 0x000000, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040, 0x200040
};