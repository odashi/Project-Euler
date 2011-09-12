#include <iostream>
using namespace std;

const int maxn = 2540160; // 7*9! < 9999999

int fractorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main(void)
{
	int sum = 0;

	for (int i = 10; i < maxn; i++)
	{
		int ii = i;
		int s = 0;
		
		while (ii > 0)
		{
			s += fractorial(ii%10);
			ii /= 10;
		}
		
		if (s == i)
			sum += s;
	}
	
	cout << sum << endl;
}
