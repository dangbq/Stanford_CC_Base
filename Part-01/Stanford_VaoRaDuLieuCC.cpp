// Stanford_VaoRaDuLieuCC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <conio.h>

#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Viết code vào đây
    //Khai báo biến
	int tuoiSV = 20;

	/*
	printf("Chao mung ban den voi C/C++ !\n");

	//Xóa thông tin màn hình
	system("CLS");

	//In thông tin ra ngoài màn hình
	printf("Tuoi sinh vien hien tai la: %d \n", tuoiSV);


	//Gán giá trị mới cho tuổi của sinh viên
	printf("Nhap tuoi moi cua sinh vien: ");

	scanf("%d", &tuoiSV);

	printf("Tuoi moi cua sinh vien la: %d \n", tuoiSV);
	*/

	/*
	//Hiển thị thông báo để người dùng nhập tuổi của sinh viên
	cout <<"Nhap tuoi cua sinh vien la: ";

	cin>>tuoiSV;

	//In thông tin ra màn hình
	cout <<"Tuoi cua sinh vien la: "<<tuoiSV<<endl;

	*/

	//In thông tin các kích thước của các kiểu dữ liệu tương ứng
	cout <<"Kieu du lieu cua char la: "<<sizeof(char)<< " byte"<<endl;

	cout <<"Kieu du lieu cua unsigned char la: "<<sizeof(unsigned char)<< " byte"<<endl;

	cout <<"Kieu du lieu cua int la: "<<sizeof(int)<< " byte"<<endl;

	cout <<"Kieu du lieu cua long la: "<<sizeof(long)<< " byte"<<endl;

	cout <<"Kieu du lieu cua long double la: "<<sizeof(long double)<< " byte"<<endl;

	//Khai báo biến
	int soa = 0, sob = 0, tonghaiso = 0;

	//Hiển thị thông báo để người dùng nhập thông tin
	cout <<"Nhap so a la: ";

	//Lấy thông tin từ bàn phím người dùng nhập vào
	cin>> soa;

	cout <<"Nhap so b la: ";

	cin>> sob;

	//Thực hiện phép toán
	tonghaiso = soa + sob;

	//In thông tin ra màn hình
	cout <<"Tong cua hai so "<<soa<<" va "<<sob<<" la: "<<tonghaiso<<endl;

	//Ví dụ: Nhập 1 kí tự từ bàn phím sau đó in thông tin ra màn hình dưới dạng mã ascii

	//Khai báo biến
	char c;

	cout <<"Nhap 1 ki tu tu ban phim la: ";

	//Loại bỏ kí tự thừa
	cin.ignore(1);

	//Gán kí tự từ bàn phím
	cin.get(c);

	cout <<"Ki tu "<<(char)c<<" co ma ascii la: "<<(int)c<<endl;

	//Dừng màn hình đến khi người dùng nhấn phím tiếp theo
	getch();

	return 0;
}

