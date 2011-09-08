#include <stdio.h>
#include <math.h>

int main(void)
{
	__int64 n = 600851475143;
	int border = (int)sqrt((double)n);
	
	for (int i = 3; n > border; i += 2)
		while (!(n % i))
			n /= i;
	
	printf("%d\n", n);
	return 0;
}
