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
	sosu = (int *)malloc(sizeof(int) * 1000000);
	
	sosu[0] = 2;
	double sum = 2;
	int num = 1;
	
	for (int i = 3; i <= 2000000; i += 2)
	{
		if (IsSosu(i))
		{
			sum += i;
			sosu[num++] = i;
		}
	}
	
	printf("%f\n", sum);
	
	free(sosu);
	return 0;
}

