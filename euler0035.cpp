#include <iostream>
#include <cmath>
using namespace std;

// 2,3,5,7‚Í©–¾‚È„‰ñ‘f”‚Æ‚·‚éB
// 2Œ…ˆÈã‚Ì”‚Å‚ÍA‚¢‚¸‚ê‚©‚ÌŒ…‚É‹ô”‚ğŠÜ‚Ş”‚Í„‰ñ‘f”‚É‚È‚è“¾‚È‚¢B

bool isprime(int n)
{
	if (n < 2) return false;
	if (n == 2) return true;
	if (!(n & 0x1)) return false; // 2*k
	int lim = (int)sqrt((double)n);
	for (int i = 3; i <= lim; i += 2)
		if (n % i == 0)
			return false;
	return true;
}

int main(void)
{
	int d[] = { 1,3,5,7,9 };
	int n[6];
	int num = 0;
	
	for (int ord = 2; ord <= 6; ord++)
	{
		int lim = 1;
		for (int i = 0; i < ord; i++)
			lim *= 5;
		
		for (int i = 0; i < lim; i++)
		{
			for (int j = i, m = 0; m < ord; j /= 5, m++)
				n[m] = j%5;
			
			bool p = true;
			
			for (int j = 0; j < ord; j++)
			{
				int a = 0;
				for (int k = 0; k < ord; k++)
					a = a*10 + d[n[(j+k)%ord]];
				
				if (!isprime(a))
				{
					p = false;
					break;
				}
			}
			
			if (p)
				num++;
		}
	}
	
	cout << num+4 << endl;
	return 0;
}
