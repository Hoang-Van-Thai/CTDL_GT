#include<iostream>
using namespace std;
struct dt
{
	int x, y, z;
	float r;
};
void nhap(dt& d)
{
	cout << "\nnhap toa do x,y,z:\n";
	cin >> d.x;
	cin >> d.y;
	cin >> d.z;
	cout << "\nnhap ban kinh: ";
	cin >> d.r;

}
void xuat(dt d)
{
	cout << "\ntoa do tam duong tron la: (" << d.x << "," << d.y << "," << d.z << ")";
	cout << "\nban kinh duong tron la:" << d.r;
}
void xuatCvDt(dt d)
{
	cout << "\nchu vi duong tron la: " << 2 * 3.14 * d.r;
	cout << "\ndien tich duong tron la: " << d.r * d.r * 3.14;
}
int main()
{
	dt x;
	nhap(x);
	xuat(x);
	xuatCvDt(x);
	return 0;
}