
//Cho mảng 1 chiều các số nguyên.Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy


#include<iostream>
using namespace std;
void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
float tinhTong(int  a[],int n)
{
	if (n < 0)
	{
		return 0;
	} 
	else if((a[n] % 2 == 0))
	{
		return a[n] + tinhTong(a, n - 1); 
	}
	else
	{
		return  tinhTong(a, n - 1);
	}
	
}

int main()
{
	int a[100];
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
	nhapMang(a,n);
	cout<<"tong la: "<<tinhTong(a, n-1);
	return 0;
}