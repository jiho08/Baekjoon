#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int j, n, cnt = 0;
	cin >> j >> n;
	cin.ignore();

	while (n--)
	{
		int t = 0;
		string s;
		getline(cin, s);

		for (const char c : s)
		{
			if (c == ' ')
				++t;
			else if (islower(c) || isdigit(c))
				t += 2;
			else if (isupper(c))
				t += 4;
		}

		if (t <= j)
			++cnt;
	}

	cout << cnt;
}