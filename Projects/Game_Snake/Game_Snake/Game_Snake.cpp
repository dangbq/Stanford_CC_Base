// Game_Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <iostream>
#define RED_COLOR 12;

using namespace std;

int width = 30;
int height = 20;

void gotoxy(int, int); // prototype 
void clrscr(); // prototype

enum TrangThai{LEFT, RIGHT, UP, DOWN};

struct ToaDo
{
	int x, y;
};

struct HoaQua
{
	int x, y;
};

struct Snake
{
	ToaDo dot[31];
	int n;
	TrangThai tt;
};

void KhoiTao(Snake &snake, HoaQua &hq)
{
	snake.dot[0].x = 1;
	snake.dot[0].y = 1;
	snake.n = 1;
	snake.tt = RIGHT;

	hq.x = 10;
	hq.y = 10;
}

void HienThi(Snake snake, HoaQua hq)
{
	system("cls");

	for(int i=0; i<= width-1; i++)
	{
		cout <<"#";
	}

	for(int i=1; i<height; i++)
	{
		for(int j=0; j<width; j++)
		{
			if(j==0 || j==width-1)
			{
				cout <<"#";
			}
			else
				cout <<" ";
		}

		cout <<endl;
	}

	for(int i=0; i< width; i++)
	{
		cout <<"#";
	}

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	
	gotoxy(hq.x, hq.y);

	putchar('F');


	for(int i=0; i<snake.n; i++)
	{
		//yellow
		SetConsoleTextAttribute(h, 14);

		gotoxy(snake.dot[i].x, snake.dot[i].y);

		printf("*");
	}
	
	SetConsoleTextAttribute(h, 15);

}

void DieuKhien_DiChuyen(Snake &snake, HoaQua &hq)
{
	for(int i=snake.n-1; i>0; i--)
	{
		snake.dot[i] = snake.dot[i-1];
	}

	if(_kbhit())
	{
		int key = _getch();

		if(key=='A' || key=='a')
		{
			snake.tt = LEFT;
		}
		else
		if(key=='D' || key=='d')
		{
			snake.tt = RIGHT;
		}
		else
		if(key=='W' || key=='w')
		{
			snake.tt = UP;
		}
		else
		if(key=='S' || key=='s')
		{
			snake.tt = DOWN;
		}

	}
}

int XuLy(Snake &snake, HoaQua &hq)
{
	
	if(snake.tt==LEFT)
	{
		snake.dot[0].x--;
	}
	else
	if(snake.tt==RIGHT)
	{
		snake.dot[0].x++;
	}
	else
	if(snake.tt==UP)
	{
		snake.dot[0].y--;
	}
	else
	if(snake.tt==DOWN)
	{
		snake.dot[0].y++;
	}

	if(snake.dot[0].x == hq.x && snake.dot[0].y == hq.y)
	{
		for(int i=snake.n-1; i>0; i--)
		{
			snake.dot[i] = snake.dot[i-1];
		}
		snake.n++;

		hq.x = rand()%width;

		hq.y = rand()%height;
	}

	if(snake.dot[0].x<0 || snake.dot[0].x>width || snake.dot[0].y<0 || snake.dot[0].y>height)
	{
		return -1;
	}

	for(int i=1; i<snake.n; i++)
	{
		if(snake.dot[0].x == snake.dot[i].x && snake.dot[0].y == snake.dot[i].y)
		{
			return -1;
		}
	}

	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	Snake snake;

	HoaQua hq;

	KhoiTao(snake, hq);

	int ma = 0;

	while(1)
	{
		//Hien thi
		HienThi(snake, hq);

		//Dieu khien
		DieuKhien_DiChuyen(snake, hq);

		//Xử lý logic thắng, thua
		ma = XuLy(snake, hq);

		if(ma==-1)
		{
			gotoxy(width + 1, 10);
			printf("Ban thua roi");

			while(_getch() != 13)
			{
			 break;
			}
		}

		Sleep(500);
	}

	return 0;
}

// function definition -- requires windows.h 
void gotoxy(int x, int y) 
{ 
  HANDLE hConsoleOutput; 
  COORD dwCursorPosition;

  cout.flush(); 
  dwCursorPosition.X = x; 
  dwCursorPosition.Y = y; 
  hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE); 
  SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition); 
}

// function definition -- requires process.h 
void clrscr() 
{ 
  system("cls"); 
}

