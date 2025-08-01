#include <algorithm>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, ans = 0;
	cin >> n;

	vector<array<int, 5>> v(n);
	vector<int> s(n);

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	for (int i = 0; i < n; ++i)
	{
		vector<bool> visit(n, false);

		for (int j = 0; j < 5; ++j)
			for (int k = 0; k < n; ++k)
			{
				if (i == k)
					continue;

				if (v[i][j] == v[k][j])
					visit[k] = true;
			}

		for (const bool b : visit)
			s[i] += b;

		ans = max(ans, s[i]);
	}

	for (int i = 1; i <= n; ++i)
		if (s[i - 1] == ans)
		{
			cout << i;
			break;
		}
}
