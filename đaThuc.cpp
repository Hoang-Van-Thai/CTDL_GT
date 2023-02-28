#include<iostream>
using namespace std;
struct daThuc
{
	int a[100];
	int n;
};
void nhapDaThuc(daThuc & dt)
{
	cout << "\nNhap bac cua da thuc: ";
	cin >> dt.n;
	for (int i = 0; i <= dt.n; i++)
	{
		cout << "\nnhap he so x^" << dt.n - i<<": ";
		cin >> dt.a[dt.n-i];
	}
}
void xuatDaThuc(daThuc dt)
{
	for (int i = 0; i <= dt.n; i++)
	{
		if ((dt.n - i) == 0)
		{
			cout << dt.a[dt.n - i] ;
			break;
		}
		cout <<  dt.a[dt.n - i]<<"x^"<<dt.n-i<<"+";
	}
}
int main()
{
	daThuc dt;
	nhapDaThuc(dt);
	xuatDaThuc(dt);
	return 0;
}