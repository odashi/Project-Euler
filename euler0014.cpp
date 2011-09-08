#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num = (int *)malloc(sizeof(int) * 1000000);
	
	num[1] = 1;
	int max = 1;
	int maxnum = 1;
	for (int i = 2; i < 1000000; i++)
	{
		__int64 a = i;
		int n = 0;
		while (a >= i)
		{
			a = a & 0x1 ? 3*a + 1 : a >> 1;
			n++;
		}
		num[i] = n + num[(int)a];
		if (num[i] > max)
			max = num[i], maxnum = i;
	}
	
	printf("%d\n", maxnum);
	free(num);
	return 0;
}
