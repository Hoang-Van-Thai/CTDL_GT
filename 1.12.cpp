#include<iostream>
using namespace std;
struct donThuc
{
	float a, n;
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
	cout << dt.a << "x" << "^" << dt.n;
}
donThuc tich(donThuc x,donThuc y)
{
	donThuc tam;
	tam.a = x.a * y.a;
	tam.n = x.n + y.n;

	return tam ;
}
donThuc daoHam(donThuc &x)
{
	x.a = x.a * x.n;
	x.n = x.n - 1;
	return x;
}
donThuc thuong(donThuc x,donThuc y)
{
	donThuc tam;
	tam.a = x.a / y.a;
	tam.n = x.n-y.n;
	return tam;

}
donThuc daoHamCapK(donThuc &x)
{
	int k;
	cout << "\nndao ham cap: ";
	cin >> k;
	for (int i = 1; i <= k; i++)
	{		
		daoHam(x);
	}
	return x;
}
int main()
{
	donThuc dt;
	nhapDonThuc(dt);
	donThuc dt1;
	nhapDonThuc(dt1);
	xuatDonThuc(dt);
	cout << endl;
	xuatDonThuc(dt1);
	cout << endl;
	xuatDonThuc(tich(dt, dt1));
	cout << endl;
	xuatDonThuc(daoHam(dt));
	cout << endl;
	xuatDonThuc(thuong(dt, dt1));
	cout << endl;
	xuatDonThuc(daoHamCapK(dt1));



	return 0;
}