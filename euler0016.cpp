#include <stdio.h>

int main(void)
{
	int n[400];
	for (int i = 0; i < 400; i++)
		n[i] = 0;
	n[0] = 1;
	
	for (int i = 0; i < 1000; i++)
	{
		int carry = 0;
		for (int j = 0; j < 400; j++)
		{
			n[j] += n[j] + carry;
			if (n[j] > 9)
			{
				carry = 1;
				n[j] -= 10;
			}
			else
				carry = 0;
		}
	}
	
	int ret = 0;
	for (int i = 0; i < 400; i++)
		ret += n[i];
	printf("%d\n", ret);
	
	return 0;
}
