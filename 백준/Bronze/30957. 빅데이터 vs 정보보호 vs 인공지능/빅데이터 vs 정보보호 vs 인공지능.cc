#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, b = 0, s = 0, a = 0;
	string str, ans;
	cin >> n >> str;

	for (const char c : str)
		switch (c)
		{
		case 'B':
			++b;
			break;
		case 'S':
			++s;
			break;
		case 'A':
			++a;
			break;
		}

	const int m = max({ b, s, a });

	if (m == b)
		ans += 'B';
	if (m == s)
		ans += 'S';
	if (m == a)
		ans += 'A';
	if (a == s && s == b)
		ans = "SCU";

	cout << ans;
}