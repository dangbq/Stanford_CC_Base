// StanfordBaiTapCauTrucCC0912.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	//Bài 2: Viết chương trình nhập vào 1 số nguyên, hiển thị số đó dưới hệ 8 và hệ 16.
	//Khai báo biến
	int so = 0;

	cout << "Nhap vao so can chuyen sang he 8 va 16: ";

	cin >> so;

	cout <<"So he 8: "<< std::oct << so << endl;

	cout << "So he 16: " << std::hex << so<<endl;

	//Bài 4: Viết chương trình nhập vào 4 số nguyên, Hiển thị ra số lớn nhất và nhỏ nhất.

	//Khai báo biến
	int so1 = 0, so2 = 0, so3 = 0, so4 = 0, min = 0, max = 0;

	cout << "Nhap vao cac so:";

	cin >> so1 >> so2 >> so3 >> so4;

	//Gán giá trị mặc định
	min = max = so1;

	if (so2 > max)
	{
		max = so2;
	}
	if (so3 > max)
	{
		max = so3;
	}
	if (so4 > max)
	{
		max = so4;
	}

	if (so2 < min)
	{
		min = so2;
	}
	if (so3 < min)
	{
		min = so3;
	}
	if (so4 < min)
	{
		min = so4;
	}

	cout << "So lon nhat la: " <<max<<endl;

	cout << "So be nhat la: " << min << endl;

    return 0;
}

