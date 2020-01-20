//ThucHanhTongHop.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	//Khai báo biến
	string strThongTin = "50,65,10,75,20,45,100,85,95,30";

	string a[10];

	string temp = "";
	int dem = 0;

	for (int i = 0; i < strThongTin.length(); i++)
	{
		temp += strThongTin[i];

		if (strThongTin[i] == ',' || i == strThongTin.length()-1)
		{
			//Tìm xem trong chuỗi có dấu , không thì mới cắt chuỗi để loại bỏ
			int idx = temp.find(',', 0);

			if (idx > 0)
			{
				//Lấy chuỗi con đã bỏ dấu ,
				a[dem] = temp.substr(0, temp.length() - 1);
			}
			else
			{
				a[dem] = temp;
			}
			temp = "";

			dem++;
		}
	}

	//Duyệt từng phần tử để đưa về dạng số sau đó tính tổng
	int tong = 0;
	for (int i = 0; i < dem; i++)
	{
		istringstream convert(a[i]);
		int value;
		convert >> value;

		//Thực hiện tính tổng
		tong += value;

		cout << value << endl;
	}

	cout << "Tong cua day la: " << tong << endl;

    return 0;
}

