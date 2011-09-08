#include <iostream>

using namespace std;

int main(void)
{
	bool used[10] = { false, false, false, false, false, false, false, false, false, false };
	int n = 9*8*7*6*5*4*3*2*1;
	int m = 9;
	int a = 1000000-1;
	string ans;
	
	for (int dummy = 0; dummy < 10; dummy++)
	{
		for (int i = 0; ; i++)
		{
			if (n > a)
			{
				int j, k;
				for (j = 0, k = i; ; j++)
				{
					if (used[j])
						continue;
					
					if (k == 0)
						break;
					k--;
				}
				
				used[j] = true;
				ans.push_back((char)('0' + j));
				
				if (m > 0)
				{
					n /= m;
					m--;
				}
				break;
			}
			else
				a -= n;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}

