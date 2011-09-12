#include <iostream>
using namespace std;

// 1‚ÌˆÊ‚ª0‚Ì”‚Í‰ñ•¶”‚Æ‚È‚ç‚È‚¢B

bool ispalindromic(int n, int b)
{
	if (n%b == 0) return false;
	
	int d[32];
	int len = 0;
	
	while (n > 0)
	{
		d[len] = n%b;
		n /= b;
		len++;
	}
	
	for (int i = 0; i < len/2; i++)
		if (d[i] != d[len-i-1]) return false;
	
	return true;
}

int main(void)
{
	int total = 0;
	
	for (int i = 1; i < 1000000; i++)
	{
		if (!ispalindromic(i, 2)) continue;
		if (!ispalindromic(i, 10)) continue;
		total += i;
	}
	
	cout << total << endl;
	return 0;
}
