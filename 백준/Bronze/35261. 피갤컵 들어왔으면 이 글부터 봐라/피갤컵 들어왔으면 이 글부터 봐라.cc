#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, ans = 5;
	string s, e = "eagle";
	cin >> n >> s;

	for (int i = 0; i <= n - 5; ++i)
	{
		int cnt = 0;

		for (int j = 0; j < 5; ++j)
			if (s[i + j] != e[j])
				++cnt;

		ans = min(ans, cnt);
	}

	cout << ans;
}