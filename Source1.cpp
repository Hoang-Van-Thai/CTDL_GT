#include<iostream>
using namespace std;
struct Phanso
{
	int tuso, mauso;
};
void nhapPS(Phanso &ps)
{
	cout << "\nNhap tu so: ";
	cin >> ps.tuso;
	do
	{
		is(ps.mauso==0)
		{
			cout << "\nNhap mau so";
			cin >> ps.mauso;
			cout<<"mau so khong hop le!! vui long nhap lai";
		}
		
	} while(ps.mauso==0)
}
void xuatPS(Phanso ps)
{
	cout << ps.tuso << "/" << ps.mauso;
}
int main()
{
	Phanso ps;
	nhapPS(ps);
	xuatPS(ps);
	system("pause");
	return 0;
}
