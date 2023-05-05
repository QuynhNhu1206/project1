#include<iostream>
using namespace std;
int main()
{
	int a, s = 0;
	cout << "\n Nhap a: ";
	cin >> a;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			s = s + i;
	}
	if (s == a)
		cout << "\n day la so hoan thien";
	else
		cout << "\n day kp la so hoan thiennnn";
	return 0;
	}