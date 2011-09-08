#include <iostream>
#include <list>

using namespace std;

int rotlen(int n)
{
	list<int> mods;
	int a = 1;
	
	while (1)
	{
		a = (a % n) * 10;
		
		if (a == 0)
			return 1;
		
		list<int>::iterator it;
		int i;
		for (it = mods.begin(), i = 0; it != mods.end(); ++it, ++i)
		{
			if (*it == a)
				return mods.size() - i;
		}
		mods.push_back(a);
	}
}

int main(void)
{
	int maxlen = 0;
	int maxn = 0;
	for (int i = 1; i <= 1000; i++)
	{
		int len = rotlen(i);
		if (len > maxlen)
		{
			maxlen = len;
			maxn = i;
		}
	}
	
	cout << maxn << endl;
	return 0;
}

