#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	for (a = 1; a < 999; a++)
	{
		for (b = 1; a+b < 1000; b++)
		{
			int sqr = a*a + b*b;
			c = (int)sqrt((double)sqr);
			if (c*c == sqr && a+b+c == 1000)
			{
				printf("%d\n", a*b*c);
				return 0;
			}
		}
	}
}
