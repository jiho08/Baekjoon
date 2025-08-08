#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int y, int x, const int n, const int m, vector<vector<bool>>& ground, vector<vector<bool>>& visited, const vector<pair<int, int>>& dir)
{
	queue<pair<int, int>> q;
	q.emplace(y, x);
	visited[y][x] = true;

	while (!q.empty())
	{
		auto [qy, qx] = q.front();
		q.pop();

		for (auto [dy, dx] : dir)
		{
			int ny = dy + qy, nx = dx + qx;

			if (nx >= 0 && nx < m && ny >= 0 && ny < n)
				if (!visited[ny][nx] && ground[ny][nx])
				{
					visited[ny][nx] = true;
					q.emplace(ny, nx);
				}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int m, n, k, cnt = 0;
		cin >> m >> n >> k;

		vector ground(n, vector(m, false));
		vector visited(n, vector(m, false));
		vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

		while (k--)
		{
			int x, y;
			cin >> x >> y;
			ground[y][x] = true;
		}

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				if (ground[i][j] && !visited[i][j])
				{
					bfs(i, j, n, m, ground, visited, dir);
					++cnt;
				}

		cout << cnt << '\n';
	}
}