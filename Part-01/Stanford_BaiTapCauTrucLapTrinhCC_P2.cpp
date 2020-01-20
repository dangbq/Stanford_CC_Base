// Stanford_BaiTapCauTrucLapTrinhCC_P2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Nhập xuất dữ liệu
#include <iostream>
#include <conio.h>
#include <ctype.h>
//Lấy bao nhiêu số sau dấu phẩy
#include <iomanip>
//Làm việc với chuỗi
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Câu 3a là:
	cout <<"Hinh 3a la: "<<endl;

	for(int i=0; i<8; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			cout <<"#";
		}

		//Xuống dòng
		cout <<endl;
	}

	//Câu 3b là:
	cout <<endl;
	cout <<"Hinh 3b la: "<<endl;

	int j = 0;

	for(int i=0; i<8; i++)
	{
		j = 0;

		while(j<8-i)
		{
			cout <<"#";
			j++;
		}

		cout <<endl;
	}

	cout <<"Hinh 3d:"<<endl;

	int i = 0;
	j = 0;

	while(i<8)
	{
		//Thiết lập lại giá trị cho j = 0
		j = 0;

		do
		{
			//In ra khoảng trắng
			if(j<8-i-1)
			{
				cout <<" ";
			}
			else
			{
				cout <<"#";
			}

			j++;
		}
		while(j<8);

		//Xuống dòng
		cout <<endl;

		i++;
	}

	//Bài tập 1
	
	//Khai báo biến
	char kitu, t='0';

NhapLai:

		cout <<"Nhap ki tu tu ban phim la: ";

		cin.get(kitu);

		if(kitu>=97 && kitu <=122)
		{
			cout <<"Ki tu chu hoa cua "<<(char)kitu<<" la: "<<(char)toupper(kitu)<<endl;
		}

		cout <<"Nhap phim 1 de tiep tuc: ";

		cin.ignore(1);

		cin.get(t);

		if(t=='1')
		{
			//Xóa kí tự xuống dòng
			cin.ignore(1);

			goto NhapLai;
		}
		

	//Bài tập 2
	cout <<"Chuong trinh tinh luong cua nhan vien:"<<endl;

	float tongluong = 0, luong = 0, giolamtrongtuan = 0, giolamcuoituan = 0, luongthemtrongtuan = 0, luongthemcuoituan = 0;

	//Khai báo 1 hằng số
	const int SO_GIO_LAM_HANH_CHINH = 40;

	const int LUONG_MOT_GIO = 10;

	const int LUONG_THEM_TRONG_TUAN = 12;

	const int LUONG_THEM_CUOI_TUAN = 18;

	cout <<"Nhap thoi gian lam them gio tu thu 2->6 la: ";

	cin >> giolamtrongtuan;

	cout <<"Nhap thoi gian lam them gio tu thu 7, chu nhat la: ";

	cin >> giolamcuoituan;

	//Tính lương
	tongluong = (SO_GIO_LAM_HANH_CHINH * LUONG_MOT_GIO) + (LUONG_THEM_TRONG_TUAN * giolamtrongtuan) + (LUONG_THEM_CUOI_TUAN * giolamcuoituan);

	//In kết quả
	cout <<"Tong luong cua nhan vien la: "<<tongluong<<" $"<<endl;
	

	//Bài tập 4
	NhapLaiTuoi:
	//Khai báo biến
	int tuoicha = 0, tuoicon  = 0, sonam  = 0;

	cout <<"Nhap vao tuoi cua cha la: ";

	cin>>tuoicha;

	cout <<"Nhap vao tuoi cua con la: ";

	cin >>tuoicon;

	//Nếu tuổi cha mà nhỏ hơn 2*tuoicon thì nhập lại
	if(tuoicha < 2*tuoicon)
	{
		goto NhapLaiTuoi;
	}

	bool thuchien = true;

	//Thực hiện công việc khi còn đúng
	while(thuchien)
	{
		if(tuoicha == (2*tuoicon))
		{
			thuchien = false;
		}
		else
		{
			tuoicha++;
			tuoicon++;
			sonam++;
		}

	}

	//In kết quả
	cout <<"So nam ma tuoi cua cha gap 2 lan tuoi con la: "<<sonam<<endl;

	cout <<"Tuoi cua cha la: "<<tuoicha<<endl;

	cout <<"Tuoi cua con la: "<<tuoicon<<endl;
	

    //Bài tập 5
	float S1 = 0, S2 = 0, tong = 0;

	int n = 0;

	cout <<"Bai tap 5:"<<endl;

	cout <<"Nhap so n la n = ";

	cin >>n;

	for(int i=1; i<=n; i++)
	{
		tong += i;
	}

	//Thực hiện tính S1

	S1 = tong / n;

	//Thiết lập lấy 3 số sau dấu phẩy

	cout << setiosflags(ios::fixed) << setprecision(3);
	cout <<"S1 = "<<S1<<endl;
	
	//Bài tập 6
	cout <<"Bai tap so 6 - P3:"<<endl;

	int hangchuc = 0, hangdonvi =0;

	for(int i =10; i<=99; i++)
	{
		hangchuc = i/10;

		hangdonvi = i%10;

		if((hangchuc * hangdonvi)  == (2*(hangchuc + hangdonvi)))
		{
			cout <<i<<endl;
		}
	}

	//Bài tập 7
ThucHienLai:
	int n = 0;

	int giaithua  = 1;

	char t;

	cout <<"Nhap gia tri can tinh giai thua la n = ";

	cin >>n;

	for(int i=1; i<=n; i++)
	{
		giaithua *= i;
	}

	//In kết quả ra màn hình
	cout <<"Giai thua cua "<<n<<" la: "<<giaithua<<endl;

	cout <<"Nhan phim 1 de tiep tuc thuc hien:";

	cin.ignore(1);

	cin.get(t);

	if(t=='1')
	{
		goto ThucHienLai;
	}
	

	//Bài tập 8
	int n=0, tongduong = 0, tongam = 0, soduong = 0, soam = 0, sokhong = 0;
		
	long long giatri  = 0;

	string strSoDuong = "", strSoAm = "";

	cout <<"Nhap vao 1 day so gom n so n  = ";

	cin>>n;

	//Nhap cac gia tri vao
	for(int i=1; i<=n; i++)
	{
		cout <<"Nhap gia tri "<<i<<": ";

		cin>>giatri;

		if(giatri>=0)
		{
			tongduong += giatri;

			strSoDuong = strSoDuong + to_string(giatri) + "\t";
		}
		else
		{
			tongam += giatri;

			strSoAm = strSoAm + to_string(giatri) + "\t";
		}

		if(giatri>0)
		{
			soduong++;
		}
		else
		{
			if(giatri==0)
			{
				sokhong++;
			}
			else
			{
				soam++;
			}
		}
	}

	//In kết quả
	cout <<"Tong cac so duong la: "<<tongduong<<endl;

	cout <<"Danh sach cac so duong:"<<endl;

	cout <<strSoDuong<<endl;

	cout <<"Tong cac so am la: "<<tongam<<endl;

	cout <<strSoAm<<endl;

	cout <<"So luong so duong la: "<<soduong<<endl;

	cout <<"So luong so am la: "<<soam<<endl;

	cout <<"So luong so khong la: "<<sokhong<<endl;

	getch();

	return 0;
}

