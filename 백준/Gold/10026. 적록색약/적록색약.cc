#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(const int n, int x, int y, const vector<vector<char>>& picture, vector<vector<bool>>& visited, const vector<pair<int, int>>& dir)
{
	queue<pair<int, int>> q;
	q.emplace(y, x);

	while (!q.empty())
	{
		auto [qy, qx] = q.front();
		q.pop();

		for (auto [dy, dx] : dir)
		{
			int ny = dy + qy, nx = dx + qx;

			if (ny >= 0 && ny < n && nx >= 0 && nx < n)
				if (!visited[ny][nx] && picture[qy][qx] == picture[ny][nx])
				{
					q.emplace(ny, nx);
					visited[ny][nx] = true;
				}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, cnt1 = 0, cnt2 = 0;
	cin >> n;

	vector picture(n, vector<char>(n));
	vector visited(n, vector(n, false));
	const vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

	for (auto& v : picture)
		for (char& c : v)
			cin >> c;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (!visited[i][j])
			{
				bfs(n, j, i, picture, visited, dir);
				++cnt1;
			}

	for (auto& v : picture)
		for (char& c : v)
			if (c == 'G')
				c = 'R';

	for (auto& row : visited)
		fill(row.begin(), row.end(), false);

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (!visited[i][j])
			{
				bfs(n, j, i, picture, visited, dir);
				++cnt2;
			}

	cout << cnt1 << ' ' << cnt2;
}