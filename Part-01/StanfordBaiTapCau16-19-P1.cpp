// StanfordBaiTapCauTrucCC0412.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

//Khai báo thư viện để lấy số lẻ
#include <iomanip>

//Khai báo thư viện làm việc với chuỗi
#include <string>

using namespace std;

int main()
{
	//Bài tập 9
	/*
	//Khai báo biến
	float a = 0, b = 0, c = 0, cau9a = 0, cau9b = 0, cau9c = 0, cau9d = 0;

	//Thông báo để người dùng nhập thông tin
	cout << "Nhap he so a = ";

	cin >> a;

	cout << "Nhap he so b = ";

	cin >> b;

	cout << "Nhap he so c = ";

	cin >> c;

	//Tính toán
	cau9a = a * a - 2 * b + ((a*b) / c);

	cau9b = 3 * a - pow(b, 3) - 2 * sqrt(c);

	cau9c = (pow(b, 2) - 4 * a*c) / (2 * a);

	cau9d = sqrt(((a*a)/b) - ((4*a)/(b*c))  + 1);

	//Thiết lập lấy 2 số sau dấu phẩy
	cout << setiosflags(ios::fixed) << setprecision(2);

	//In kết quả ra màn hình
	cout << "Ket qua cau 9a la: " << cau9a << endl;

	cout << "Ket qua cau 9b la: " << cau9b << endl;

	cout << "Ket qua cau 9c la: " << cau9c << endl;

	cout << "Ket qua cau 9d la: " << cau9d << endl;
	*/

	//Bài 16

	/*int so4ChuSo = 0, hangNghin = 0, hangTram = 0, hangChuc = 0, hangDonVi = 0, tong = 0, temp = 0;

	cout << "Nhap so gom 4 chu so: ";

	cin >> so4ChuSo;

	//Thực hiện tính toán
	hangNghin = so4ChuSo / 1000;

	temp = so4ChuSo % 1000;

	hangTram = temp / 100;

	temp = temp % 100;

	hangChuc = temp / 10;

	hangDonVi = temp % 10;

	tong = hangNghin + hangTram + hangChuc + hangDonVi;

	cout << "Tong cua cac chu so trong so 4 chu so la: " << tong << endl;

	cout << "So hang nghin: " << hangNghin << endl;

	cout << "So hang don vi: " << hangDonVi << endl;
	*/


	//Bài tập 19

	string hoTen1 = "", hoTen2 = "";

	float heSoLuong1 = 0, heSoLuong2 = 0, phuCap1 = 0, phuCap2 = 0, baoHiem1 = 0, baoHiem2 = 0, tongLuong1 = 0, tongLuong2 = 0;

	//Khai báo lương cơ bản
	const int luongCoBan = 3000000;

	//Nhập thông tin cho nhân viên
	cout << "Nhap thong tin nhan vien 1: " << endl;

	cout << "Ho ten: ";
	
	//Lấy chuỗi người dùng nhập từ bàn phím và gán cho biến hoTen1
	getline(cin, hoTen1);

	cout << "He so luong: ";

	cin >> heSoLuong1;

	cout << "Phu cap: ";

	cin >> phuCap1;

	cout << "Bao hiem XH: ";

	cin >> baoHiem1;

	cout << "Nhap thong tin nhan vien 2: " << endl;

	cout << "Ho ten: ";

	//Loại bỏ kí tự xuống dòng enter
	cin.ignore(1);

	getline(cin, hoTen2);

	cout << "He so luong: ";

	cin >> heSoLuong2;

	cout << "Phu cap: ";

	cin >> phuCap2;

	cout << "Bao hiem XH: ";

	cin >> baoHiem2;

	//Tính toán
	tongLuong1 = luongCoBan * heSoLuong1 + luongCoBan * heSoLuong1 * ((phuCap1 - baoHiem1) / 100);

	tongLuong2 = luongCoBan * heSoLuong2 + luongCoBan * heSoLuong2 * ((phuCap2 - baoHiem2) / 100);

	cout << setiosflags(ios::fixed) << setprecision(2) << endl;

	cout << "Tong luong cua nhan vien 1 la: " << tongLuong1 << endl;

	cout << "Tong luong cua nhan vien 2 la: " << tongLuong2 << endl;

	//Dừng màn hình để xem thông tin đến khi nhấn phím bất kỳ tiếp theo
	system("pause");

    return 0;
}

