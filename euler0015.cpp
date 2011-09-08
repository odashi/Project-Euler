#include <stdio.h>

const int N = 20;

int main(void)
{
	__int64 n[2*N + 3];
	for (int i = 0; i < 2*N + 3; i++)
		n[i] = 0;
	n[1] = 1;
	for (int i = 1; i <= 2*N; i++)
	{
		__int64 temp = n[0];
		for (int j = 0; j <= i; j++)
		{
			n[j+1] += temp;
			temp = n[j+1] - temp;
		}
	}
	
	char c[20];
	int l = 0;
	while (n[N+1])
	{
		c[l++] = n[N+1] % 10;
		n[N+1] /= 10;
	}
	while (l > 0)
		putchar(c[--l] + '0');
	putchar('\n');
	return 0;
}
