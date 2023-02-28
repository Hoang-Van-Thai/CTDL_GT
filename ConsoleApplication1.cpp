// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
struct Phanso
{
	int tuso, mauso;
};
struct honso
{
	int phanNguyen;
	Phanso phanSo;

};
void nhapPS(Phanso& ps)
{
	cout << "\nNhap tu so: ";
	cin >> ps.tuso;
	do
	{
		cout << "\nNhap mau so: ";
		cin >> ps.mauso;
		if (ps.mauso == 0)
		{
			cout << "\nkhong hop le!! vui long nhap lai";
		}
	} while (ps.mauso == 0);
}
void xuatPS(Phanso ps)
{
	cout << "("<<ps.tuso << "/" << ps.mauso<<")";
}

void nhapHonSo(honso& hs)
{
	cout << "\nnhap phan nguyen cua hon so: ";
	cin >> hs.phanNguyen;
	do
	{
		nhapPS(hs.phanSo);
		if ((hs.phanSo.tuso / hs.phanSo.mauso) > 1)
		{
			cout << "\nkhong hop le!! vui long nhap lai";
		}
	} while ((hs.phanSo.tuso / hs.phanSo.mauso) > 1);
	
}
void xuatHonSo(honso hs)
{
	cout << hs.phanNguyen;
	xuatPS(hs.phanSo);
}
int main()
{
	honso hs;
	nhapHonSo(hs);
	xuatHonSo(hs);
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
