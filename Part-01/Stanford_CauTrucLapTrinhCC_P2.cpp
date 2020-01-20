// Stanford_CauTrucLapTrinhCC_P2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Ví dụ: Nhập thông tin tháng hiện tại và in ra kết quả là tháng mấy trong c++
	/*
	//Khai báo biến
	int thang = 0;

	string strKetQua = "";

	cout <<"Su dung switch case trong c++ "<<endl;

	cout <<"Nhap thang hien tai la: ";

	cin >>thang;

	//Kiểm tra điều kiện
	switch(thang)
	{
			case 1: strKetQua = "Thang mot";
				break;
			case 2: strKetQua = "Thang hai";
				break;
			case 3: strKetQua = "Thang ba";
				break;
			case 4: strKetQua = "Thang tu";
				break;
			case 5: strKetQua = "Thang nam";
				break;
			case 6: strKetQua = "Thang sau";
				break;
			case 7: strKetQua = "Thang bay";
				break;
			case 8: strKetQua = "Thang tam";
				break;
			case 9: strKetQua = "Thang chin";
				break;
			case 10: strKetQua = "Thang muoi";
				break;
			case 11: strKetQua = "Thang muoi mot";
				break;
			case 12: strKetQua = "Thang muoi hai";
				break;
			default: strKetQua = "Khong co thang nay";
				break;
	}

	//In kết quả
	cout <<"Thang hien tai la: "<<strKetQua<<endl;
	*/

	//Ví dụ 2: Nhập hai số nguyên và phép tính cộng, trừ, nhân, chia sau đó thực hiện tính toán tương ứng rồi in kết quả ra màn hình
	//Khai báo biến
	int soa = 0, sob = 0, ketQua = 0;
	char phepTinh;

	cout << "Nhap so a = ";
	cin >> soa;
	cout << "Nhap so b = ";
	cin >> sob;

	cin.ignore(1);

	cout << "Nhap phep tinh: ";
	cin.get(phepTinh);

	switch (phepTinh)
	{
		case '+': ketQua = soa + sob;
			break;
		case '-': ketQua = soa - sob;
			break;
		case '*': ketQua = soa * sob;
			break;
		case '/': ketQua = soa / sob;
			break;
		default: cout << "Khong co phep tinh nay" << endl;
			break;
	}

	cout << "Ket qua phep tinh " << phepTinh << " cua 2 so la: " << ketQua << endl;

	//Sử dụng vòng lặp while
	cout <<"Su dung vong lap while:"<<endl;

	//Khai báo biến
	int i = 0;

	while(i<5)
	{
		i++;

		cout <<"Gia tri cua i la: "<<i<<endl;
	}

	//i = 0;

	cout <<"Su dung vong lap do...while:"<<endl;

	do
	{
		cout <<"Gia tri cua i la: "<<i<<endl;
		i++;

	}
	while(i<0);

	//Sử dụng vòng lặp for
	cout <<"Su dung vong lap for trong c++"<<endl;

	for(int i=80; i<=90; i+=2) // i = i + 2
	{
		cout <<i<<endl;
	}

	//Ví dụ: In ra các kí tự trong bảng mã ascii
	cout <<"Cac ki tu trong bang ma ascii la: "<<endl;

	cout <<"Gia tri\t Ki tu"<<endl;

	for(int i=0; i<=256; i++)
	{
		cout <<(int)i<<"\t"<<(char)i<<endl;
	}

	//Dừng màn hình để xem kết quả khi chạy debug
	getch();

	return 0;
}

