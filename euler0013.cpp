#include <stdio.h>

void input(char *in)
{
	gets(in);
	for (int i = 0; i < 50; i++)
		in[i] -= '0';
	for (int i = 50; i < 54; i++)
		in[i] = 0;
	for (int i = 0; i < 25; i++)
	{
		int temp = in[i];
		in[i] = in[50-1-i];
		in[50-1-i] = temp;
	}
}

void add(char *ret, char *in)
{
	char carry = 0;
	for (int i = 0; i < 54; i++)
	{
		ret[i] += in[i] + carry;
		if (ret[i] > 9)
		{
			carry = 1;
			ret[i] -= 10;
		}
		else
			carry = 0;
	}
}

int main(void)
{
	char ret[54];
	char in[54];
	for (int i = 0; i < 54; i++)
		ret[i] = 0;
	
	for (int i = 0; i < 100; i++)
	{
		input(in);
		add(ret, in);
	}
	int j = 53;
	while (ret[j] == 0)
		j--;
	for (int k = j-10; j > k; j--)
		putchar(ret[j] + '0');
	putchar('\n');
	return 0;
}
