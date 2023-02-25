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
	cout << "\nNhap mau so";
	cin >> ps.mauso;
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