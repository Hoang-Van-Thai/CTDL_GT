#include<iostream>
using namespace std;
struct axbyc
{
	int a, b, c;
};
void nhap(axbyc &x)
{
	cout << "\nnhap a: ";
	cin >> x.a;
	cout << "\nnhap b: ";
	cin >> x.b;
	cout << "\nnhap c: ";
	cin >> x.c;
}
void xuat(axbyc x)
{
	cout << x.a << "x+" << x.b << "y+" << x.c;
}
int main()
{
	axbyc x;
	nhap(x);
	xuat(x);
	return 0;
}