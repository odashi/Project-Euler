#include <stdio.h>

const int rows = 15;

int main(void)
{
	int a[20000];
	
	for (int i = 0; i < 20000; i++)
		a[i] = 0;
	a[0] = 1;
	
	for (int b = 2; b <= 100; b++)
	{
		int carry = 0;
		for (int i = 0; i <  20000; i++)
		{
			int temp = a[i] * b + carry;
			a[i] = temp % 10;
			carry = temp / 10;
		}
	}
	
	int total = 0;
	for (int i = 0; i < 20000; i++)
		total += a[i];
	
	printf("%d\n", total);
	
	return 0;
}
