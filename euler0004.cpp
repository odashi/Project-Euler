#include <stdio.h>

int main(void)
{
	int max = 0;
	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			int n = i*j;
			int s[8];
			int k, l;
			for (k = 0; n > 0; k++)
			{
				s[k] = n % 10;
				n /= 10;
			}
			for (l = 0; l < k/2; l++)
			{
				if (s[l] != s[k-1-l])
					break;
			}
			if (l == k/2 && i*j > max)
				max = i*j;
		}
	}
	printf("%d\n", max);
	return 0;
}
