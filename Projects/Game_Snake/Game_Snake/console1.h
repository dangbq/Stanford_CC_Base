#include "stdafx.h"
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128
HANDLE  screen;
int textcolor = LIGHTGREEN;
int backgroundcolor = BLACK;
screen = GetStdHandle(STD_OUTPUT_HANDLE);
void TextColor(int fontcolor,int backgroundcolor,HANDLE screen)
{
   int color_attribute;
   color_attribute = backgroundcolor;
   color_attribute = _rotl(color_attribute,4) | fontcolor;
   SetConsoleTextAttribute(screen,color_attribute);
}
 
TextColor(textcolor,backgroundcolor ,screen); 
FillConsoleOutputAttribute(screen, _rotl(backgroundcolor,4) , 80 * 50,coord , &cWritten);