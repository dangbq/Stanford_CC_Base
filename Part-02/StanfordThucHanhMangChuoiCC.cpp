// StanfordThucHanhMangChuoiCC.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	//Khai báo biến
	char s[10], t[10] = "Stanford";

	//Lấy thông tin từ chuỗi t sang s
	strcpy_s(s, t);

	cout << "Chuoi s: "<<s << endl;

	char s1[10];

	//Lấy 5 kí từ từ t sang s1
	strncpy_s(s1, t, 5);

	cout << "Chuoi s1 la: " << s1 << endl;

	//Nối chuỗi
	char s2[10] = "Sta";

	strcat_s(s2, "p");

	cout << "Chuoi ghep: "<<s2<< endl;

	//So sánh chuỗi
	char s3[10] = "Stane", s4[10] = "Stanf";

	//So sánh chuỗi và trả về kết quả
	int idx = strcmp(s3, s4);

	if (idx == 0)
	{
		cout << "Hai chuoi bang nhau" << endl;
	}
	else
	{
		if (idx > 0)
		{
			cout << "Chuoi s3 lon hon s4" << endl;
		}
		else
		{
			cout << "Chuoi s3 nho hon s4" << endl;
		}
	}

	char s5[10] = "Ha Noi", s6[10] = "ha noi";

	//So sánh 2 chuỗi
	int idx1 = _strcmpi(s5, s6);

	if (idx1 == 0)
	{
		cout << "Hai chuoi s5 va s6 bang nhau" << endl;
	}

	cout << "Do lon chuoi Stanford la: " << strlen(s) << endl;

	//Ví dụ: Nhập n thông tin họ tên sinh viên từ bàn phím sau đó sắp xếp danh sách theo thứ tự abc của tên sinh viên đó.
	string hoten[3];

	int n = 3;

	cout << "Nhap vao cac ho ten sinh vien: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien 1: ";
		getline(cin, hoten[i]);
	}

	//Sắp xếp
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//Xử lý
			//1. Tách để tên
			string ten1 = "", ten2 = "", temp = "";

			//Lấy tên đầu tiên
			for (int k = hoten[i].length() - 1; k >= 0; k--)
			{
				string temp1 = hoten[i];
				temp += temp1[k];

				if (temp1[k] == ' ')
				{
					ten1 = temp;

					temp = "";
					break;
				}
			}

			//Lấy tên 2

			for (int m = hoten[j].length() - 1; m >= 0; m--)
			{
				temp += hoten[j][m];

				if (hoten[j][m] == ' ')
				{
					ten2 = temp;

					temp = "";
					break;
				}
			}
			//2. So sánh và hoán đổi
			//Lấy từ vị trí bao nhiêu và số lượng kí tự
			string t1  = ten1.substr(ten1.length()-2, 2);

			string t2 = ten2.substr(ten2.length() - 2, 2);

			//Chuyển từ chuỗi sang dạng mảng kí tự
			const char * c1 = t1.c_str();

			const char * c2 = t2.c_str();

			if (strcmp(c1, c2) > 0)
			{
				temp = hoten[i];

				hoten[i] = hoten[j];

				hoten[j] = temp;
			}

			//cout << t1 << t2 << endl;
		}
	}

	//In thông tin ra màn hình
	for (int i = 0; i < n; i++)
	{
		cout << hoten[i] << endl;
	}
	*/

//Bài 13: Nhập xâu. Thống kê số các chữ số ‘0’, số chữ số ‘1’, …, số chữ số ‘9’ trong xâu.

string strThongTin = "";

cout << "Nhap vao 1 chuoi: ";

getline(cin, strThongTin);

int a[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//Duyệt để thống kê
for (int i = 0; i < strThongTin.length(); i++)
{
	switch (strThongTin[i])
	{
	case '0': a[0]++;
		break;
	case '1': a[1]++;
		break;
	case '2': a[2]++;
		break;
	case '3': a[3]++;
		break;
	case '4': a[4]++;
		break;
	case '5': a[5]++;
		break;
	case '6': a[6]++;
		break;
	case '7': a[7]++;
		break;
	case '8': a[8]++;
		break;
	case '9': a[9]++;
		break;
	}
}

cout << "Thong ke so lan xuat hien: " << endl;

for (int i = 0; i < 10; i++)
{
	cout << i << ": " << a[i] << endl;
}
    return 0;
}

