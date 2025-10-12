#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

#define MAX 1000
using namespace std;

string uniqueStr()
{
	char keyStr[MAX];
	char str[MAX];
	int n = 0, k = 0;
	cin >> n >> k >> keyStr;
	int strLength = strlen(keyStr);
	vector<string> str_vector;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (strncmp(str, keyStr, strLength) == 0)
		{
			str_vector.push_back(str);
		}
		else {
			continue;
		}
	}
	sort(str_vector.begin(), str_vector.end());

	return str_vector.at(k-1);
}
int main(void)
{
	cout << uniqueStr();
	return 0;
}
