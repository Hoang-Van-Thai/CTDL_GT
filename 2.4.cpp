
//Cho mảng 1 chiều các số thực. Viết hàm đếm số lượng giá trị dương trong mảng bằng phương pháp đệ quy


#include<iostream>
using namespace std;
void nhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
int dem(float  a[], int n)
{
	if (n < 0)
	{
		return 0;
	}
	else if (a[n] > 0)
	{
		return dem(a, n-1) + 1;
	}
	
		return  dem(a, n-1);
		
}

int main()
{
	float a[100];
	int n;
	do
	{
		cout << "\nnhap so luong phan tu: ";
		cin >> n;
		if (n < 0)
		{
			cout << "\nso luong phan tu khong hop le!!! vui long nhap lai\n";
		}
	} while (n < 0);
	nhapMang(a, n);
	xuatMang(a, n);
	cout << "so phan tu duong trong mang la: " << dem(a, n - 1);
	return 0;
}