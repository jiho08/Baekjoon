#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, x = 0, y;
	cin >> n;

	string s[n] = {};
	int t[n] = {};

	for (int i = 0; i < n; ++i)
		cin >> s[i] >> t[i];

	for (int i = 0; i < n; ++i)
		if (t[i] > x)
			x = t[i], y = i;
		else if (t[i] == x)
			if (s[i] < s[y])
				x = t[i], y = i;

	cout << s[y];
}