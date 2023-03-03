#include<iostream>
using namespace std;
struct NGAY
{
	int ng, thang, nam;
};
struct HOPSUA
{
	char nhanHieu[20];
	float trongLuong;
	NGAY ngay;

};
void nhapNgay(NGAY & n)
{

	do
	{
		cout << "\nNhap ngay: ";
		cin >> n.ng;
		if (n.ng > 30 || n.ng < 1)
		{
			cout << "ngay khong hop le!! vui long nhap lai";
		}
	} while (n.ng > 30 || n.ng < 1);



	do
	{
		cout << "\nNhap thang: ";
		cin >> n.thang;

		if (n.thang > 32 || n.thang < 1)
		{
			cout << "thang khong hop le!! vui long nhap lai";
		}
	} while (n.thang > 30 || n.thang < 1);

	cout << "\nNhap nam: ";
	cin >> n.nam;
}
void xuatNgay(NGAY n)
{
	cout << n.ng << "/" << n.thang << "/" << n.nam;
}
void nhap(HOPSUA& x)
{
	cout << "\nnhap nhan hieu: ";
	cin >> x.nhanHieu;
	cout << "\nnhap trong luong: ";
	cin >> x.trongLuong;
	nhapNgay(x.ngay);
}
void xuat(HOPSUA x)
{
	cout << "\nnhan hieu: \n"<<x.nhanHieu;
	cout << "\ntrong luong: \n" << x.trongLuong;
	xuatNgay(x.ngay);

}
int main()
{

	HOPSUA x;
	nhap(x);
	xuat(x);

	return 0;
}