#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, k, ans = 0;
	cin >> n >> m >> k;

	vector<string> v(n);

	for (string& s : v)
		cin >> s;

	for (const string& s : v)
	{
		int cnt = 0;

		for (const char c : s)
		{
			if (c == '1')
				cnt = 0;
			else
				if (++cnt >= k)
					++ans;
		}
	}

	cout << ans;
}