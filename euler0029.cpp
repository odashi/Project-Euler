#include <iostream>
using namespace std;

const int A = 100;
const int B = 100;
const int BB = 600; // B * (int)log2(A)

int main(void)
{
	bool a[A+1];
	bool b[BB+1];
	int total = 0;
	
	for (int i = 0; i <= A; i++)
		a[i] = false;
	
	for (int i = 2; i <= A; i++)
	{
		if (a[i]) continue;
	
		for (int j = 0; j <= BB; j++)
			b[j] = false;

		for (int j = i, m = 1; j <= A; j *= i, m++)
		{
			a[j] = true;
			
			for (int n = 2; n <= B; n++)
			{
				if (b[n*m]) continue;
				
				b[n*m] = true;
				total++;
			}
		}
	}
	
	cout << total << endl;
	return 0;
}
