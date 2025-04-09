#include <iostream>

using namespace std;

int main()
{
	int n, c = 0;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; ++i)
		c += s[i] - '0';

	cout << c;
}