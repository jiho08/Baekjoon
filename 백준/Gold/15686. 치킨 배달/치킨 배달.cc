#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, ans = 2100000000;
vector<pair<int, int>> h, c;
vector dist(100, vector<int>(13));
vector<int> a;

void dfs(const int start, const int depth)
{
	if (depth == m)
	{
		int s = 0;

		for (int i = 0; i < h.size(); ++i)
		{
			int d = 2100000000;

			for (const int j : a)
				d = min(d, dist[i][j]);

			s += d;
		}

		ans = min(ans, s);
		return;
	}

	for (int i = start; i < c.size(); ++i)
	{
		a.push_back(i);
		dfs(i + 1, depth + 1);
		a.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			int t;
			cin >> t;

			if (t == 1)
				h.emplace_back(i, j);
			else if (t == 2)
				c.emplace_back(i, j);
		}

	for (int i = 0; i < h.size(); ++i)
		for (int j = 0; j < c.size(); ++j)
			dist[i][j] = abs(h[i].first - c[j].first) + abs(h[i].second - c[j].second);

	dfs(0, 0);

	cout << ans;
}