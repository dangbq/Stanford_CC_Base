// Stanford_HieuUngChuChay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
#include "windows.h"
#include <time.h>
using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	_COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hConsole, pos);
}
int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{

		char s[50];

		strcpy_s(s, "HELLO STANFORD");

		gotoxy(rand()%120, rand()%30);

		cout << s;

		Sleep(1000);


		system("cls");

	}

	system("pause");

	return 0;
}

