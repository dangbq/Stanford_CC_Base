// Stanford_BaiTapCauTrucLTCC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Khai báo thư viện để làm việc với các hàm số học
#include <math.h>
//Khai báo thư viện để lấy bao nhiêu số sau dấu phẩy
#include <iomanip>
//Khai báo để làm việc với chuỗi
#include <string>
using namespace std;
int main()
{
	/*
	//Bài 8
	//Khai báo biến
	float cau8a = 0, cau8b = 0;

	cau8a = sqrt(3 + sqrt(3 + sqrt(3)));

	cau8b = 1 / (2.0 + 1 / (2.0 + 1 / 2.0));

	cout << setiosflags(ios::fixed) << setprecision(2);

	cout << "Ket qua cau 8a la: " << cau8a << endl;
	cout << "Ket qua cau 8b la: " << cau8b << endl;

	//Bài tập 9
	float a = 0, b = 0, c = 0, cau9a = 0, cau9b = 0, cau9c = 0, cau9d = 0;

	cout << "Nhap so a = ";
	cin >> a;

	cout << "Nhap so b = ";
	cin >> b;

	cout << "Nhap so c = ";
	cin >> c;

	//Thực hiện phép toán
	cau9a = a * a - 2 * b + (a*b) / c;
	cau9b = (pow(b, 2) - 4 * a*c) / (2 * a);
	cau9c = 3 * a - pow(b, 3) - 2 * sqrt(c);
	cau9d = sqrt((a*a) / b - (4 * a) / (b*c) + 1);

	cout << "Ket qua cau 9a = " << cau9a << endl << "Cau 9b = " << cau9b << endl << "Cau 9c = " << cau9c << endl << "Cau 9d = " << cau9d << endl;
	//Dừng màn hình đến khi nhấn phím tiếp theo

	//Bài tập 11
	float trungBinhCong = 0, trungBinhNhan = 0;

	trungBinhCong = (a + b + c) / 3;
	trungBinhNhan = pow((a*b*c), 1 / 3.0);

	cout << "Trung binh cong la: " << trungBinhCong << endl;
	cout << "Trung binh nhan la: " << trungBinhNhan << endl;

	//Bài tập 15: Nhập vào 4 chữ số. In ra tổng của 4 chữ số này và chữ số hàng chục, hàng
	//đơn vị của tổng(ví dụ 4 chữ số 3, 1, 8, 5 có tổng là 17 và chữ số hàng chục là 1 và hàng đơn vị là 7, cần in ra 17, 1, 7).
	//Khai báo biến
	int so1 = 0, so2 = 0, so3 = 0, so4 = 0, tong = 0, hangChuc = 0, hangDonVi = 0;

	cout << "Nhap so thu 1 = ";
	cin >> so1;

	cout << "Nhap so thu 2 = ";
	cin >> so2;

	cout << "Nhap so thu 3 = ";
	cin >> so3;

	cout << "Nhap so thu 4 = ";
	cin >> so4;
	tong = so1 + so2 + so3 + so4;

	hangChuc = tong / 10;
	hangDonVi = tong % 10;
	cout << "Tong 4 so la: " << tong << endl;
	cout << "So hang chuc = " << hangChuc << endl;
	cout << "So hang don vi = " << hangDonVi << endl;
	

	//Bài tập 16: Nhập vào một số nguyên (có 4 chữ số). In ra tổng của 4 chữ số này và chữ số
	//đầu, chữ số cuối(ví dụ số 3185 có tổng các chữ số là 17, đầu và cuối là 3 và 5, kết quả in ra là : 17, 3, 5)
	//Khai báo biến
	int so4ChuSo = 0, nghin = 0, tram = 0, chuc = 0, donVi = 0, tong = 0;
	NhapLaiSo:
	cout << "Nhap so gom 4 chu so la: ";
	cin >> so4ChuSo;

	if (so4ChuSo < 1000 || so4ChuSo > 9999)
	{
		cout << "Ban phai nhap so gom 4 chu so" << endl;
		goto NhapLaiSo;
	}

	int temp = 0;
	nghin = so4ChuSo / 1000;
	temp = so4ChuSo % 1000;
	tram = temp / 100;
	temp = temp % 100;
	chuc = temp / 10;
	donVi = temp % 10;
	tong = nghin + tram + chuc + donVi;

	cout << "Tong cac so trong so 4 chu so la: " << tong << endl;
	cout << "Hang nghin: " << nghin << endl;
	cout << "Don vi: " << donVi << endl;
	*/

	//Khai báo biến
	string chuoiKiTu = "";

	cout << "Nhap vao 1 chuoi ki tu: " << endl;

	getline(cin, chuoiKiTu);

	//In chuỗi ra màn hình
	cout << "Chuoi nhap la: " << chuoiKiTu << endl;

	system("pause");
}
