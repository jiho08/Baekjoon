#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m, x, b = 0;
	string s;
	cin >> m;

	while (m--)
	{
		cin >> s;

		if (s == "add")
		{
			cin >> x;
			b |= 1 << x;
		}
		else if (s == "remove")
		{
			cin >> x;
			b &= ~(1 << x);
		}
		else if (s == "check")
		{
			cin >> x;
			cout << (b & (1 << x) ? 1 : 0) << '\n';
		}
		else if (s == "toggle")
		{
			cin >> x;
			b ^= 1 << x;
		}
		else if (s == "all")
			b = (1 << 21) - 1;
		else if (s == "empty")
			b = 0;
	}
}