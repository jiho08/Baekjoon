#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(const vector<vector<int>>& graph, vector<bool>& visited, const int v)
{
	visited[v] = true;
	cout << v << ' ';

	for (const int i : graph[v])
		if (!visited[i])
			dfs(graph, visited, i);
}

void bfs(const vector<vector<int>>& graph, vector<bool>& visited, const int v)
{
	queue<int> q;
	q.push(v);
	visited[v] = true;

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();
		cout << f << ' ';

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

	int n, m, v;
	cin >> n >> m >> v;

	vector<vector<int>> graph(n + 1);
	vector visited(n + 1, false);

	while (m--)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; ++i)
		sort(graph[i].begin(), graph[i].end());

	dfs(graph, visited, v);

	fill(visited.begin(), visited.end(), false);
	cout << '\n';

	bfs(graph, visited, v);
}