#include <iostream>
using namespace std;

// 少し計算してみたところ、積が4桁のとき以外はpandigitalにならないらしい。

int ord(int n, bool d[10])
{
	int i = 1;
	while (1)
	{
		while (d[i]) i++;
		if (n == 0) break;
		
		i++;
		n--;
	}
	
	d[i] = true;
	return i;
}

int main(void)
{
	bool d[10];
	int total = 0;
	
	for (int i = 0; i < 9*8*7*6; i++)
	{
		int ii = i;
		int a = 0;
		bool d[10] = { false, false, false, false, false, false, false, false, false, false };
		
		for (int j = 0; j <= 3; j++)
		{
			int jj = ii % (9-j);
			ii /= 9-j;
			
			a = a*10 + ord(jj, d);
		}
		
		for (int j = 0; j < 5*4*3*2; j++)
		{
			int jj = j;
			int b = 0;
			bool e[10];
			for (int k = 0; k < 10; k++)
				e[k] = d[k];
			
			for (int k = 0; k <= 4; k++)
			{
				int kk = jj % (5-k);
				jj /= 5-k;
				
				b = b*10 + ord(kk, e);
			}
			
			if (
				(b%10)*(b/10) == a ||
				(b%100)*(b/100) == a ||
				(b%1000)*(b/1000) == a
				)
			{
				total += a;
				break;
			}
		}
	}
	
	cout << total << endl;
	return 0;
}
