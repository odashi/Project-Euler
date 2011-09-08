#include <stdio.h>

int main(void)
{
	int a = 1, b = 1, c = a+b;
	int sum = c;
	while (1)
	{
		a = b+c;
		b = c+a;
		c = a+b;
		if (c >= 4000000)
			break;
		sum += c;
	}
	
	printf("%d\n", sum);
	return 0;
}
