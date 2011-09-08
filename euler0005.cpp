#include <stdio.h>

int main(void)
{
	int n = 1;
	for (int i = 2; i <= 20; i++)
	{
		if (n % i)
		{
			int a = n, b = i, c = a%b;
			while (c)
				a = b, b = c, c = a%b;
			n = n*i / b;
		}
	}
	printf("%d\n", n);
	return 0;
}
