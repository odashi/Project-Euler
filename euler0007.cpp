#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *sosu;

bool IsSosu(int n)
{
	int border = (int)sqrt((double)n);
	for (int i = 0; sosu[i] <= border; i++)
		if(!(n % sosu[i]))
			return false;
	return true;
}

int main(void)
{
	sosu = (int *)malloc(sizeof(int) * 10000);
	
	sosu[0] = 2;
	int num = 1;
	int i;
	
	for (i = 3; ; i += 2)
	{
		if (IsSosu(i))
		{
			if (num == 10000)
				break;
			sosu[num++] = i;
		}
	}
	
	printf("%d\n", i);
	
	free(sosu);
	return 0;
}
