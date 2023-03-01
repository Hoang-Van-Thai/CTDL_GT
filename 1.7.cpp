#include<iostream>
using namespace std;
struct ngay
{
	int ng, thang,nam;
};
void nhapNgay(ngay & n)
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
void xuatNgay(ngay n)
{
	cout << n.ng << "/" << n.thang << "/"<<n.nam;
}
int main()
{
	ngay n;
	nhapNgay(n);
	xuatNgay(n);
	return 0;
}