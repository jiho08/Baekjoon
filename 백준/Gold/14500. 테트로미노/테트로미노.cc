#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, ans = 0;
	cin >> n >> m;

	vector v(n, vector<int>(m));

	const vector<vector<pair<int, int>>> blocks =
	{
		{{0,1},{0,2},{0,3}},
		{{1,0},{2,0},{3,0}},

		{{0,1},{1,0},{1,1}},

		{{1,0},{2,0},{2,1}},
		{{1,0},{2,0},{2,-1}},
		{{0,1},{0,2},{-1,2}},
		{{0,1},{0,2},{1,2}},
		{{-1,0},{-2,0},{-2,-1}},
		{{-1,0},{-2,0},{-2,1}},
		{{0,-1},{0,-2},{1,-2}},
		{{0,-1},{0,-2},{-1,-2}},

		{{1,0},{1,1},{2,1}},
		{{1,0},{1,-1},{2,-1}},
		{{0,1},{-1,1},{-1,2}},
		{{0,1},{1,1},{1,2}},

		{{0,1},{0,2},{1,1}},
		{{0,1},{0,2},{-1,1}},
		{{1,0},{2,0},{1,1}},
		{{1,0},{2,0},{1,-1}}
	};

	for (auto& i : v)
		for (int& j : i)
			cin >> j;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			for (const auto& b : blocks)
			{
				int sum = v[i][j];
				bool flag = true;

				for (const auto& [by, bx] : b)
				{
					const int y = i + by;
					const int x = j + bx;

					if (y < 0 || y >= n || x < 0 || x >= m)
					{
						flag = false;
						break;
					}

					sum += v[y][x];
				}

				if (flag)
					ans = max(ans, sum);
			}

	cout << ans;
}