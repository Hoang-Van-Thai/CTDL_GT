#include<iostream>
#include<math.h>
using namespace std;

struct diem
{
	int a, b;

};
struct dinh
{
	diem A, B, C;
};
void nhapdiem(diem& x)
{
	
	cin >> x.a;
	cin >> x.b;
}
void nhap(dinh& x)
{
	cout << "\nNhap toa do diem thu 1:\n";
	nhapdiem(x.A);
	cout << "\nNhap toa do diem thu 2:\n";
	nhapdiem(x.B);
	cout << "\nNhap toa do diem thu 3:\n";
	nhapdiem(x.C);
}
float tinhS(dinh x)
{
	float a = ((x.A.a * x.B.b) - (x.B.a * x.A.b));
	if (a< 0)
	{
		a *= (-1);
	}
	return a/ 2;
}
float tinhC(dinh x)
{
	float AB = sqrt(pow(x.B.a - x.A.a, 2) + pow(x.B.b - x.A.b, 2));
	float BC = sqrt(pow(x.C.a - x.B.a, 2) + pow(x.C.b - x.B.b, 2));
	float AC = sqrt(pow(x.C.a - x.A.a, 2) + pow(x.C.b - x.A.b, 2));
	return AB + AC + BC;
}
diem trongTam(dinh x)
{
	float x1 = (x.A.a + x.B.a + x.C.a) / 3;
	float y1= (x.A.b + x.B.b + x.C.b) / 3;
	diem tam;
	tam.a = x1;
	tam.b = y1;
	return tam;
}
void xuatDiem(diem d)
{
	cout << "(" << d.a << "," << d.b << ")";
}
int main()
{
	dinh x;
	nhap(x);
	cout << "\ns la:" << tinhS(x);
	cout << "\nc la:" << tinhC(x);
	cout << "\ntrong tam la " ;
	xuatDiem(trongTam(x));
	return 0;
}