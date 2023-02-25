#include<iostream>
#include<string>
using namespace std;
struct Thanhpho
{
	int MTT;
	string TenTP;
	float DT;

};
void NhapTP(Thanhpho& TP)
{
		cout << "\nNhap ma thanh pho:";
		cin >> TP.MTT;
		do 
		{
			rewind(stdin);
			cout << "\nNhap ten thanh pho:";
			getline(cin, TP.TenTP);
			if (TP.TenTP.length() > 30)
			{
				cout << "\nkhong hop le!!! vui log nhap lai";
			}
		} while (TP.TenTP.length()>30);
		cout << "\nNhap dien tich: ";
		cin >> TP.DT;
}
void XuatTP(Thanhpho TP)
{
	cout << "\nMa thanh pho:"<<TP.MTT;
	cout << "\nTen thanh pho:" << TP.TenTP;
	cout << "\nDien tich thanh pho:" << TP.DT;
	
}
void menu(Thanhpho TP)
{
	while (true)
	{
		system("cls");
		cout << "\n0.Thoat";
		cout << "\n1.Nhap thong tin thanh pho";
		cout << "\n2.Xuat thong tin thanh pho";

		int luachon;
		cout << "\nNhap lua chon";
		cin >> luachon;
		if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			NhapTP(TP);
		}
		else if (luachon == 2)
		{
			XuatTP(TP);
			system("pause");
		}


	}
}
int main()
{


	Thanhpho TP;
	menu(TP);
	system("pause");
	return 0;
}