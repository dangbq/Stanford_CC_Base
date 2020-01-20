// Stanford_HuongDanBaiTapCauTrucCC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include <iomanip>

//Khai báo để sử dụng với các hàm số học
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	//Bài tập 1
	//Tuổi của một người − Số lượng cây trong thành phố
	unsigned char tuoi = 100;

    long soLuongCay = 100000;

	//− Độ dài cạnh một tam giác − Khoảng cách giữa các hành tinh
	float canhCuaTamGia = 3.567;

	double khoangcachcachanhtinh = 125604568;

	//− Một chữ số − Nghiệm x của phương trình bậc 1
	char chuSo = '9';

	float nghiemcuax = 19.567;
	//− Một chữ cái − Biệt thức Δ của phương trình bậc 2

	char chuCai = 'S';

	float detal = 23.65;

	//Bài tập 2
	//số thực, nguyên, nguyên dài và kí tự

	//Khai báo biến
	float sothuc = 0;

	int songuyen = 0;

	long songuyendai = 0;

	char kitu = 0;

	//Thông báo người dùng cần nhập thông tin
	cout <<"Nhap so thuc la:";

	cin >> sothuc;

	cout <<"Nhap so nguyen la: ";

	cin >> songuyen;

	cout <<"Nhap so nguyen dai la: ";

	cin >> songuyendai;

	//Xóa kí tự xuống dòng khi enter
	cin.ignore(1);

	cout  <<"Nhap ki tu la: ";

	cin.get(kitu);

	//In kết quả ra màn hình

	cout <<"So nguyen: "<<songuyen <<" va so nguyen dai: "<<songuyendai<<endl;

	cout <<"So thuc: "<<sothuc << ", ki tu la: "<<kitu<<endl;

	//Bài tập 4
	char kitu1;

	cout  <<"Nhap ki tu can chuyen doi la: ";


	//Xóa kí tự xuống dòng khi enter
	cin.ignore(1);

	cin.get(kitu1);

	//In thông tin ra màn hình
	cout <<"Ki tu "<<kitu1<<" co ma ascii la: "<<(int)kitu1<<endl;
	*/

	//Bài tập 5
	/*
	//Khai báo biến
	float sothuc1 = 0, sothuc2=0;

	cout <<"Nhap so thuc thu nhat la: ";

	cin>>sothuc1;

	cout <<"Nhap so thuc thu hai la: ";

	cin>>sothuc2;

	//In thông tin
	cout <<"So thuc thu nhat la: "<<setprecision(3)<<sothuc1<<endl;

	cout <<"So thuc thu hai la: "<<setprecision(3)<<sothuc2<<endl;
	*/

	//Bài tập 6
	char c1 = 200; unsigned char c2 = 200 ;

	cout << "c1 = " << c1 << ", c2 = " << c2 << "\n" ;

	cout << "c1+100 = " << c1+100 << ", c2+100 = " << c2+100<<endl;

	//Bài tập 8
	float cau8a = 0, cau8b = 0;

	//Thực hiện tính toán
	cau8a = sqrt (3.0 + sqrt(3.0 + sqrt(3.0)));

	cau8b = 1/ (2.0 + 1/ (2.0 + 1/2.0));

	cout <<"Cau 8a la: "<<setprecision(3)<<cau8a<<endl;

	cout <<"Cau 8b la: "<<setprecision(3)<<cau8b<<endl;

	//Bài tập 9

	//Khai báo biến
	float a = 0, b = 0, c = 0, cau9a=0, cau9b=0, cau9c=0, cau9d=0;

	//Thông báo người dùng nhập thông tin
	cout <<"Nhap so a la: ";

	cin >>a;

	cout <<"Nhap so b la: ";

	cin >>b;

	cout <<"Nhap so c la: ";

	cin >>c;

	//Thực hiện phép toán

	cau9c = 3*a - pow(b, 3) - (2*sqrt(c));

	cout <<"Ket qua cau cau 9c la: "<<setprecision(3)<<cau9c<<endl;

	return 0;
}

