#include <iostream>
using namespace std;

int diagonal(int w)
{
	int n = (w - 1) / 2;
	return (((16 * n + 30) * n + 26) * n + 3) / 3;
}

int main(void)
{
	cout << diagonal(1001) << endl;
	return 0;
}
