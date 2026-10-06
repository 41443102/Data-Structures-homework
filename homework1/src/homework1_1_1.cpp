#include<iostream>
using namespace std;

int A(int m, int n)
{
	if (m == 0) //安m琌0
	{
		return n + 1; //肚n+1
	}
	else if (m > 0 && n == 0) //安n琌0
	{
		return A(m - 1, 1); //肚A(m - 1, 1)
	}
	else if (m > 0 && n > 0) //安mn常0
	{
		return A(m - 1, A(m, n - 1)); //肚A(m - 1, A(m, n - 1))
	}
}

int main()
{
	int m, n;
	while (cin >> m >> n) //块ㄢ计
	{
		cout << A(m, n) << endl; //块Ackermann Function计
	}
	return 0;
}