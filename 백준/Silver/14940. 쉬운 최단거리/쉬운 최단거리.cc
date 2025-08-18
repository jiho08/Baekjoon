#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector map(n, vector<int>(m));
	vector dist(n, vector(m, -1));
	vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			int t;
			cin >> t;

			map[i][j] = t;

			if (t == 2)
			{
				q.emplace(i, j);
				dist[i][j] = 0;
			}
		}

	while (!q.empty())
	{
		auto [y, x] = q.front();
		q.pop();

		for (auto [dy, dx] : dir)
		{
			int cy = y + dy, cx = x + dx;

			if (cy >= 0 && cy < n && cx >= 0 && cx < m)
				if (dist[cy][cx] == -1 && map[cy][cx] != 0)
				{
					q.emplace(cy, cx);
					dist[cy][cx] = dist[y][x] + 1;
				}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			if (dist[i][j] == -1 && map[i][j] == 0)
				cout << "0 ";
			else
				cout << dist[i][j] << ' ';

		cout << '\n';
	}
}