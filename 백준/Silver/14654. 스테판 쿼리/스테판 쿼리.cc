#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 0, ans = -1;
	cin >> n;

	char win = ' ';
	vector<int> a(n), b(n);

	for (int& i : a)
		cin >> i;

	for (int& i : b)
		cin >> i;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] - b[i] == 1 || b[i] - a[i] == 2)
		{
			if (win == 'b')
			{
				ans = max(ans, cnt);
				cnt = 0;
			}

			++cnt;
			win = 'a';
		}
		else if (b[i] - a[i] == 1 || a[i] - b[i] == 2)
		{
			if (win == 'a')
			{
				ans = max(ans, cnt);
				cnt = 0;
			}

			++cnt;
			win = 'b';
		}
		else if (a[i] == b[i])
		{
			ans = max(ans, cnt);
			cnt = 1;
			win = (win == 'a' ? 'b' : 'a');
		}
	}

	cout << max(ans, cnt);
}