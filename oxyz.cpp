#include<iostream>
using namespace std;
struct diem
{
	int x,y,z;
};
void nhapToaDo(diem& d)
{
	cout << "\nNhap x: ";
	cin >> d.x;
	cout << "\nNhap y: ";
	cin >> d.y;
	cout << "\nNhap z: ";
	cin >> d.z;
}
void xuatToaDo(diem d)
{
	cout << "(" << d.x << ";" << d.y <<";"<<d.z << ")";
}
int main()
{
	diem d;
	nhapToaDo(d);
	xuatToaDo(d);
	return 0;
}