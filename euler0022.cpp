#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<string> names;
	
	do
	{
		cin.ignore(); // "
		string s;
		getline(cin, s, '\"');
		names.push_back(s);
		cin.ignore(); // ,
	} while (!cin.eof());
	
	sort(names.begin(), names.end());
	
	vector<string>::iterator it;
	int j;
	int total = 0;
	for (it = names.begin(), j = 1; it != names.end(); ++it, ++j)
	{
		int len = it->size();
		int temp = 0;
		for (int k = 0; k < len; k++)
			temp += (*it)[k] - 'A' + 1;
		total += temp * j;
	}
	
	cout << total << endl;
	return 0;
}

