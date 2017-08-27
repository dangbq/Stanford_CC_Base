#include "stdafx.h"
#include<cosole>
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