#include <stdio.h>

int main(void)
{
	int a[20][20];
	for (int j = 0; j < 20; j++)
		for (int i = 0; i < 20; i++)
			scanf("%d", &a[i][j]);
	
	int max = 0;
	int temp;
	for (int j = 0; j < 20; j++)
		for (int i = 0; i <= 16; i++)
			if ((temp = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j]) > max)
				max = temp;
	for (int j = 0; j <= 16; j++)
		for (int i = 0; i < 20; i++)
			if ((temp = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3]) > max)
				max = temp;
	for (int j = 0; j <= 16; j++)
		for (int i = 0; i <= 16; i++)
			if ((temp = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3]) > max)
				max = temp;
	for (int j = 0; j <= 16; j++)
		for (int i = 0; i <= 16; i++)
			if ((temp = a[i+3][j] * a[i+2][j+1] * a[i+1][j+2] * a[i][j+3]) > max)
				max = temp;
	
	printf("%d\n", max);
	return 0;
}
