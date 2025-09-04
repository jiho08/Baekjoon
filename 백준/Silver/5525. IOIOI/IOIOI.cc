#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	string s;
	cin >> n >> m >> s;

	int cnt = 0, ans = 0;

	for (int i = 1; i < m - 1; ++i)
		if (s[i - 1] == 'I' && s[i] == 'O' && s[i + 1] == 'I')
		{
			++cnt;

			if (cnt >= n)
				ans++;

			++i;
		}
		else if (cnt > 0)
			cnt = 0;

	cout << ans;
}