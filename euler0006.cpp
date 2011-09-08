#include <stdio.h>

int main(void)
{
	int n = 0, m = 0;
	for (int i = 1; i <= 100; i++)
		n += i*i, m += i;
	printf("%d\n", m*m - n);
	return 0;
}
