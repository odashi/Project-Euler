#include <iostream>

using namespace std;

int add(int a[], int b[], int n)
{
	int order = 0;
	int carry = 0;
	
	for (int i = 0; i < n; i++)
	{
		a[i] += b[i] + carry;
		carry = a[i] / 10;
		a[i] %= 10;
		if (a[i] > 0)
			order = i;
	}
	return order+1;
}

void copy(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int n = 1;
	int a[1000], b[1000], c[1000];
	
	for (int i = 0; i < 1000; i++)
		a[i] = b[i] = c[i] = 0;
	a[0] = 1;
	
	while (true)
	{
		copy(c, b, 1000);
		copy(b, a, 1000);
		int order = add(a, c, 1000);
		n++;
		if (order >= 1000)
			break;
	}
	
	cout << n << endl;
	
	return 0;
}

