#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dfs(const int n, const pair<int, int> x, vector<vector<bool>>& visited, vector<vector<int>>& map, const vector<pair<int, int>>& dir)
{
	visited[x.first][x.second] = true;
	int cnt = 1;

	for (auto [dx, dy] : dir)
	{
		int nx = x.first + dx;
		int ny = x.second + dy;

		if (nx >= 0 && nx < n && ny >= 0 && ny < n)
		{
			if (!visited[nx][ny] && map[nx][ny] == 1)
			{
				visited[nx][ny] = true;
				cnt += dfs(n, { nx, ny }, visited, map, dir);
			}
		}
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	cin >> n;

	vector<vector<int>> map(n, vector<int>(n));
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	const vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	vector<int> homeCount;

	for (auto& p : map)
	{
		string s;
		cin >> s;

		for (int i = 0; i < n; ++i)
			p[i] = s[i] - '0';
	}

	for (int i = 0; i < n; ++i)
		for (int j = 0 ; j < n; ++j)
			if (map[i][j] == 1 && !visited[i][j])
			{
				++sum;
				homeCount.push_back(dfs(n, { i, j }, visited, map, dir));
			}

	cout << sum << '\n';

	sort(homeCount.begin(), homeCount.end());

	for (const int i : homeCount)
		cout << i << '\n';
}