#include<iostream>
using namespace std;
struct diem
{
	int x;
	int y;
};
void nhapToaDo(diem& d)
{
	cout << "\nNhap x: ";
	cin >> d.x;
	cout << "\nNhap y: ";
	cin >> d.y;
}
void xuatToaDo(diem d)
{
	cout << "("<<d.x<<";"<<d.y<<")";
}
int main()
{
	diem d;
	nhapToaDo(d);
	xuatToaDo(d);
	return 0;
}