// StanfordBaiTapMangCC.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Bài tập 1
	const int MAX = 100;
	/*
	//Khai báo mảng
	float a[MAX], trungBinh = 0, tongDay = 0, tongDuong = 0, tongAm = 0, tongChan = 0, tongLe = 0;

	int n = 0;

	cout << "Nhap mang gom n phan tu voi n = ";

	cin >> n;

	cout << "Nhap cac phan tu cho mang:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";

		cin >> a[i];
	}

	//Duyệt vòng lặp để tính toán
	for (int i = 0; i < n; i++)
	{
		tongDay += a[i];

		if (a[i] > 0)
		{
			tongDuong += a[i];
		}
		//Tổng âm
		if (a[i] < 0)
		{
			tongAm += a[i];
		}
		//Tổng chẵn
		if (i % 2 == 0)
		{
			tongChan += a[i];
		}
		//Tổng lẻ
		if (i % 2 != 0)
		{
			tongLe += a[i];
		}
	}

	trungBinh = tongDay / n;

	//In thông tin ra màn hình
	cout << "Tong day: " << tongDay << endl;

	cout << "Trung binh day: " << trungBinh << endl;

	cout << "Tong duong: " << tongDuong << endl;

	cout << "Tong am: " << tongAm << endl;

	cout << "Tong vi tri chan: " << tongChan << endl;

	cout << "Tong vi tri le: " << tongLe << endl;

	//Bài 2
	float x = 0;

	cout << "Nhap gia tri x can tim la x = ";

	cin >> x;

	//Tìm vị trí đầu tiên của x trong dãy
	for (int i = 0; i <   n; i++)
	{
		//Nếu tìm thấy x trong dãy
		if (a[i] == x)
		{
			cout << "Vi tri cua " << x << " la: " << (i + 1) << endl;
			break;
		}
	}

	//Bài tập 3
	float max = a[0], min = a[0];

	//Duyệt vòng lặp để tìm max, min
	for (int i = 1; i < n; i++)
	{
		//Nếu có số lớn hơn
		if (a[i] > max)
		{
			max = a[i];
		}

		//Nếu có số nhỏ hơn
		if (a[i] < min)
		{
			//Gán lại giá trị min
			min = a[i];
		}
	}

	//In kết quả
	cout << "Gia tri lon nhat la: " << max << endl;

	cout << "Gia tri nho nhat la: " << min << endl;

	//Bài tập 4
	float temp = 0;

	//Sắp xếp tăng dần
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				//Hoán đổi
				temp = a[i];

				a[i] = a[j];

				a[j] = temp;
			}
		}
	}

	//In dãy ra
	cout << "Day sap xep tang dan: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}

	cout << "Day sap xep giam dan: " << endl;

	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << endl;
	}
	*/
	//Bài tập 6
	string strThongTin = "Cong ty Stanford – Dao tao va phat trien cong nghe";

	//Khai báo 1 biến mảng kiểu chuỗi
	string words[MAX];

	int dem = 0;

	string t = "";

	//Duyệt để lấy từng kí tự
	for (int i = 0; i < strThongTin.length(); i++)
	{
		t += strThongTin[i];

		//Nếu gặp kí tự rỗng hoặc kết thúc chuỗi thì lấy chuỗi lưu tạm trong t
		//để gán vào từng phần tử tương ứng của mảng
		if (strThongTin[i] == ' ' || i == strThongTin.length() - 1)
		{
			words[dem] = t;
			dem++;

			//Xóa thông tin trong biến tạm đi
			t = "";
		}
	}

	//In thông tin
	for (int i = 0; i < dem; i++)
	{
		cout << words[i] << endl;
	}
    return 0;
}

