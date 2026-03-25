#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	while (n--)
	{
		int s, c, a, r;
		cin >> s >> c >> a >> r;

		if (s > 999 || c > 1599 || a > 1499 || (r != -1 && r < 31))
			++cnt;
	}

	cout << cnt;
}