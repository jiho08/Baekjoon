#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> maze(n, vector<int>(m));
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < m; ++j)
			maze[i][j] = s[j] - '0';
	}

	q.emplace(0, 0);
	visited[0][0] = true;

	vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	vector<vector<int>> dist(n, vector<int>(m, 0));
	dist[0][0] = 1;

	while (!q.empty())
	{
		auto [x, y] = q.front();
		q.pop();

		for (auto [dx, dy] : dir)
		{
			int nx = x + dx, ny = y + dy;

			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (!visited[nx][ny] && maze[nx][ny] == 1)
				{
					visited[nx][ny] = true;
					dist[nx][ny] = dist[x][y] + 1;
					q.emplace(nx, ny);
				}
			}
		}
	}

	cout << dist[n - 1][m - 1];
}