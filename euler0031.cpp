#include <iostream>
using namespace std;

int coin[] = { 200,100,50,20,10,5,2,1 };

int pattern(int rest, int depth)
{
	if (coin[depth] == 1) return 1;
	
	int n = rest / coin[depth];
	int total = 0;
	for (int i = 0; i <= n; i++)
		total += pattern(rest - i*coin[depth], depth+1);
	
	return total;
}

int main(void)
{
	cout << pattern(200,0) << endl;
	return 0;
}
