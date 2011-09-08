#include <stdio.h>


int ddd(int n)
{
	int ret = 0;
	
	int lim = n / 2;
	for (int i = 1; i <= lim; i++)
		if (n % i == 0)
			ret += i;
	return ret;
}

int main(void)
{
	int total = 0;
	for (int i = 1; i < 10000; i++)
	{
		int a = ddd(i);
		if (ddd(a) == i && a != i)
			total += i;
	}
	
	printf("%d\n", total);
	
	return 0;
}

