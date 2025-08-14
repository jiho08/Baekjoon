#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(const int n, const int x, const vector<vector<int>>& graph, vector<bool>& visited)
{
	queue<int> q;
	q.push(x);

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();

		for (int i : graph[f])
			if (!visited[i])
			{
				visited[i] = true;
				q.push(i);
			}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, cnt = 0;
	cin >> n >> m;

	vector<vector<int>> graph(n + 1);
	vector visited(n + 1, false);

	if (m == 0)
	{
		cout << n;
		return 0;
	}

	while (m--)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
		if (!visited[i])
		{
			visited[i] = true;
			++cnt;
			bfs(n, i, graph, visited);
		}

	cout << cnt;
}