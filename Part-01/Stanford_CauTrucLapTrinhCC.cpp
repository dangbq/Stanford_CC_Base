// Stanford_CauTrucLapTrinhCC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Ví dụ 1: Nhập chiều cao của Tuyên và Thắng sau đó kiểm tra xem chiều cao của hai bạn có bằng nhau không ?
	/*
	//Khai báo biến
	float chieucaoThang = 0, chieucaoTuyen = 0;
	
	cout <<"So sanh chieu cao cua hai ban:"<<endl;

	cout <<"Nhap chieu cao cua Thang la: ";

	cin>> chieucaoThang;

	cout <<"Nhap chieu cao cua Tuyen la: ";

	cin>> chieucaoTuyen;

	//Sử dụng cấu trúc if else để so sánh
	if(chieucaoThang==chieucaoTuyen)
	{
		cout <<"Chieu cao cua hai ban bang nhau"<<endl;
	}
	else
	{
		if(chieucaoThang>chieucaoTuyen)
		{
			cout <<"Chieu cao cua Thang lon hon Tuyen"<<endl;
		}
		else
		{
			cout <<"Chieu cao cua Tuyen lon hon Thang"<<endl;
		}
	}
	*/

	//Ví dụ 2: Giải phương trình bậc nhất ax + b = c với a # 0

	//Khai báo biến
	float a = 0, b = 0, c = 0, x = 0;

	cout <<"Giai phuong trinh ax + b = c;"<<endl;

NhapLaiHeSoa:

	cout <<"Nhap he so a = ";

	cin>> a;

	//Nếu a khác 0
	if(a != 0)
	{
		cout <<"Nhap he so b = ";

		cin>> b;

		cout <<"Nhap he so c = ";

		cin>> c;

		//Giải nghiệm
		x = (c - b) / a;

		//In kết quả
		cout <<"Nghiem cua phuong trinh la x = "<<x<<endl;

	}
	else
	{
		cout <<"Ban phai nhap he so a khac 0"<<endl;

		//Di chuyển đến đoạn code tiếp theo
		goto NhapLaiHeSoa;
	}

	getch();

	return 0;
}

