#include <stdio.h>

const int rows = 15;

int main(void)
{
	int table[rows][rows+1];
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows+1; j++)
			table[i][j] = 0;
	}
	
	scanf("%d", &table[0][1]);
	
	for (int i = 1; i < rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			scanf("%d", &table[i][j+1]);
			
			if (table[i-1][j] > table[i-1][j+1])
				table[i][j+1] += table[i-1][j];
			else
				table[i][j+1] += table[i-1][j+1];
		}
	}
	
	int maximum = 0;
	for (int i = 0; i < rows; i++)
	{
		if (table[rows-1][i+1] > maximum)
			maximum = table[rows-1][i+1];
	}
	
	printf("%d\n", maximum);
	
	return 0;
}
