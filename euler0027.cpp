#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
	if (n < 2) return false;
	if (n == 2) return true;
	if (!(n & 0x1)) return false; // 2*k
	int lim = (int)sqrt((double)n);
	for (int i = 3; i <= lim; i += 2)
		if (n % i == 0)
			return false;
	return true;
}

int main(void)
{
	int maxx = 0;
	int prod = 0;
	
	for (int b = 1; b < 1000; b++)
	{
		if (isprime(b))
		{
			for (int a = 1; a < 1000; a += 2)
			{
				int x = 1;
				while (isprime(x*x + a*x + b))
					x++;
				if (x-1 > maxx)
					maxx = x-1, prod = a*b;
				x = 1;
				while (isprime(x*x - a*x + b))
					x++;
				if (x-1 > maxx)
					maxx = x-1, prod = -a*b;
			}
		}
	}
	
	cout << prod << endl;
	
	return 0;
}

