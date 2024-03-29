// utils.cpp
// よく使うかもしれない関数をまとめたもの。
// 必要に応じて、各問題のソースにコピーして使う。

// 素数判定
#include <cmath>
using namespace std;

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

// 最大公約数
int gcd(int a, int b)
{
	while (a%b != 0)
	{
		int c = a%b;
		a = b;
		b = c;
	}
	return b;
}

// 最小公倍数
int lcm(int a, int b)
{
	return a*b / gcd(a, b);
}
