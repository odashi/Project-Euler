#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while (a%b != 0)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	
	return b;
}

int main(void)
{
	int numerator = 1, denominator = 1;
	
	for (int i = 10; i <= 99; i++)
	{
		for (int j = 10; j < i; j++)
		{
			if (i%10 == j/10)
			{
				if ((i/10)*j == i*(j%10))
				{
					numerator *= j;
					denominator *= i;
					break;
				}
			}
			else if (i/10 == j%10)
			{
				if ((i%10)*j == i*(j/10))
				{
					numerator *= j;
					denominator *= i;
					break;
				}
			}
		}
	}

	cout << denominator / gcd(numerator, denominator) << endl;
	return 0;
}
