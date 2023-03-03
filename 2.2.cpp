#include<iostream>
using namespace std;
long tinhnGT(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return tinhnGT(n - 1) * n;
	}
}
int main()
{
	int n;
	cout << "\nnhap vao n: ";
	cin >> n;
	long s = tinhnGT(n);
	cout << "\nn!= " << s;
	return 0;
}