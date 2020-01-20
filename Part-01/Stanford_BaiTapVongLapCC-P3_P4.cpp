// Stanford_BaiTapVongLapCC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <ctype.h>
#include <math.h>
using namespace std;
int main()
{
	//Bài 1 - P3
	/*
    //Khai báo biến
	char kiTu;

	cout << "Nhap vao 1 ki tu: ";
	cin.get(kiTu);

	if (kiTu >= 97 && kiTu <= 122)
	{
		//Chuyển về chữ hoa và in ra
		cout << "Chu hoa cua ki tu " << kiTu << " la: " << (char)toupper(kiTu) << endl;
	}
	else
	{
		cout << "Ki tu nhap vao khong trong khoang tu a-z" << endl;
	}
	
	//Bài 7 - P3: Viết chương trình tính tổng bình phương các số lẻ từ 1 tới N. N được nhập từ bàn phím.
	//Khai báo biến
	int n = 0, tongBinhPhuong = 0;

	cout << "Nhap vao gia tri n = ";
	cin >> n;

	//Tính tổng bình phương
	for (int i = 1; i <= n; i++)
	{
		//Nếu là số lẻ
		if (i % 2 != 0) {
			tongBinhPhuong += i * i;//tongBinhPhuong = tongBinhPhuong + i^2;
		}
	}

	cout << "Tong binh phuong la: " << tongBinhPhuong << endl;
	

	//Bài 12: Viết chương trình nhập vào 1 số tự nhiên và in ra thông báo xem đó là thứ mấy trong tuần.Nếu thứ không hợp lệ thì in ra dòng thông báo[Không phải thứ trong tuần.]
	//Khai báo biến
	int thu = 0;
	cout << "Nhap vao thu trong tuan: ";
	cin >> thu;

	cout << "Hom nay la: ";
	switch (thu)
	{
		case 0: cout << "Chu Nhat" << endl;
			break;
		case 1: cout << "Thu Hai" << endl;
			break;
		case 2: cout << "Thu Ba" << endl;
			break;
		case 3: cout << "Thu Tu" << endl;
			break;
		case 4: cout << "Thu Nam" << endl;
			break;
		case 5: cout << "Thu Sau" << endl;
			break;
		case 6: cout << "Thu Bay" << endl;
			break;
		default:
			cout << "Khong xac dinh" << endl;
			break;
	}
	

	//Bài 5 - P4: In ra màn hình các số có 2 chữ số sao cho tích của 2 chữ số này bằng 2 lần tổng của 2 chữ số đó(ví dụ số 36 có tích 3 * 6 = 18 gấp 2 lần tổng của nó là 3 + 6 = 9)

	//Khai báo biến
	int hangChuc = 0, hangDonVi = 0, tich = 0, tong = 0;

	//Xử lý yêu cầu
	cout << "Cac so ma co tich bang 2 tong hai so la: " << endl;
	for (int i = 10; i < 100; i++)
	{
		hangChuc = i / 10;
		hangDonVi = i % 10;
		tich = hangChuc * hangDonVi;
		tong = hangChuc + hangDonVi;
		if (tich == 2 * tong)
		{
			cout << i << endl;
		}
	}

	//Bài 3: Nhập vào tuổi cha và tuổi con hiện nay sao cho tuổi cha lớn hơn 2 lần tuổi con.Tìm xem bao nhiêu năm nữa tuổi cha sẽ bằng đúng 2 lần tuổi con(ví dụ 30 và 12, sau 6 năm nữa tuổi cha là 36 gấp đôi tuổi con là 18)
	//Khai báo biến
	int tuoiCha = 0, tuoiCon = 0, soNam = 0;

	//Nhập thông tin tuổi cha đến khi nào lớn hơn 2 lần tuổi còn thì mới thôi
	do
	{
		//Xóa màn hình chứa thông tin trước đó đi
		system("cls");

		cout << "Nhap vao tuoi cha: ";
		cin >> tuoiCha;

		cout << "Nhap vao tuoi con: ";
		cin >> tuoiCon;
	} while (tuoiCha <= (2 * tuoiCon));
	//Tính số năm
	soNam = tuoiCha - 2 * tuoiCon;

	cout << "So nam ma tuoi cha bang 2 lan tuoi con la: " << soNam << endl;
	cout << "Tuoi cha la: " << (tuoiCha + soNam) << endl;
	cout << "Tuoi con la: " << (tuoiCon + soNam) << endl;
	

	//Bài 1 - P4: Nhập một kí tự. Cho biết kí tự đó có phải là chữ cái hay không
	//Khai báo biến
char kiTu;

cout << "Nhap vao 1 ki tu: ";
cin >> kiTu;

if ((kiTu >= 97 && kiTu <= 122) || (kiTu >= 65 && kiTu <= 90))
{
	cout << "Ki tu nhap vao là 1 chu cai" << endl;
}
else
{
	cout << "Ki tu nhap vao khong phai chu cai" << endl;
}

//Bài tập 2
int x = 0;
double fxa = 0, fxb = 0;

cout << "Nhap vao gia tri x = ";
cin >> x;

if (x > 0)
{
	fxa = 3 * x + sqrt(x);
}
else
{
	fxa = exp(x) + 4;
}

cout << "Ket qua cau 1a = " << fxa << endl;
*/

//Bài tập 6 - P4
//Khai báo biến
double cau6a = 0, cau6b = 0;
int n = 1;

//Thực hiện công việc
while(true)
{
	cau6a += (1 / (2.0 * n - 1));

	if (cau6a > 2.101999)
	{
		break;
	}
	n++;
} 
cout << "So n can tim la: " << n - 1 << endl;

	//Dừng màn hình
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
