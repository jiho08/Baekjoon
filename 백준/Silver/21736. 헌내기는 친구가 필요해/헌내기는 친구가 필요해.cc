#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, cnt = 0;
	cin >> n >> m;

	vector map(n, vector<char>(m));
	vector visited(n, vector(m, false));
	vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	queue <pair<int, int>> q;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			char t;
			cin >> t;
			map[i][j] = t;

			if (t == 'I')
			{
				q.emplace(i, j);
				visited[i][j] = true;
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
				if (!visited[cy][cx] && map[cy][cx] != 'X')
				{
					q.emplace(cy, cx);
					visited[cy][cx] = true;

					if (map[cy][cx] == 'P')
						++cnt;
				}
		}
	}

	if (cnt == 0)
		cout << "TT";
	else
		cout << cnt;
}