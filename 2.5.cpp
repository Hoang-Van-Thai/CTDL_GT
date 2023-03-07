//Hàm tính căn bậc 3 của 1 số thực có thể cài đặt đệ quy theo 2 hàm exp và ln
#include<iostream>
using namespace std;
float can3(float x)
{
	if (x == 0)
	{
		return 0;
	}
	else if (x < 0)
	{
		return -can3(-x);
	}
	else
	{
		return exp(log(x) / 3);
	}
}
int main()
{
	cout << can3(27);
	return 0;
}