#include <iostream>
using namespace std;

const int lim = 354294; // 6 * 9^5 < 999999

int main(void)
{
	int total = 0;
	
	for (int i = 2; i <= lim; i++)
	{
		int n = 0, m = i;
		while (m > 0)
		{
			int j = m % 10;
			n += j*j*j*j*j;
			m /= 10;
		}
		if (n == i)
			total += i;
	}
	
	cout << total << endl;
	return 0;
}
