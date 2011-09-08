#include <iostream>
#include <list>

using namespace std;

const int MAX = 28123;

bool flag[MAX+1];

int ddd(int n)
{
	int ret = 0;
	
	int lim = n / 2;
	for (int i = 1; i <= lim; i++)
		if (n % i == 0)
			ret += i;
	return ret;
}

int main(void)
{
	list<int> abundants;
	
	for (int i = 1; i <= MAX; i++)
		flag[i] = false;
	
	int total = 0;
	for (int i = 1; i <= MAX; i++)
	{
		if (!flag[i])
			total += i;
		
		if (ddd(i) > i)
		{
			abundants.push_back(i);
			list<int>::iterator it;
			for (it = abundants.begin(); it != abundants.end(); ++it)
			{
				if (i + (*it) <= MAX)
					flag[i + (*it)] = true;
			}
		}

	}
	
	cout << total << endl;
	
	return 0;
}

