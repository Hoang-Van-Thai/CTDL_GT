#include<iostream>
using namespace std;
struct donThuc
{
	int a,n;
};
void nhapDonThuc(donThuc& dt)
{
	cout << "\nNhap a: ";
	cin >> dt.a;
	cout << "\nNhap n: ";
	cin >> dt.n;
}
void xuatDonThuc(donThuc dt)
{
	cout << dt.a<<"x"<<"^"<<dt.n;
}
int main()
{
	donThuc dt;
	nhapDonThuc(dt);
	xuatDonThuc(dt);
	return 0;
}