#include <stdio.h>

int numDivisor(int n)
{
	int ret = 1;
	while (!(n % 2))
		n /= 2, ret++;
	for (int i = 3; n > 1; i += 2)
	{
		int a = 1;
		while (!(n % i))
			n /= i, a++;
		ret *= a;
	}
	return ret;
}

int main(void)
{
	int tri = 1;
	int next = 2;
	
	while (numDivisor(tri) < 501)
		tri += next++;
	
	printf("%d\n", tri);
	return 0;
}
