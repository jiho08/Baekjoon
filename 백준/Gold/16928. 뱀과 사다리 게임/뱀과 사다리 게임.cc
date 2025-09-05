#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, res = 0;
	cin >> n >> m;

	vector<int> graph(101);
	vector visited(101, false);

	for (int i = 1; i <= 100; ++i)
		graph[i] = i;

	while (n--)
	{
		int x, y;
		cin >> x >> y;
		graph[x] = y;
	}

	while (m--)
	{
		int u, v;
		cin >> u >> v;
		graph[u] = v;
	}

	queue<pair<int, int>> q;
	q.emplace(1, 0);
	visited[1] = true;

	while (!q.empty())
	{
		auto [f, cnt] = q.front();
		q.pop();

		if (f == 100)
		{
			res = cnt;
			break;
		}

		for (int i = 1; i <= 6; ++i)
		{
			int t = f + i;

			if (t > 100)
				continue;

			t = graph[t];

			if (!visited[t])
			{
				q.emplace(t, cnt + 1);
				visited[t] = true;
			}
		}
	}

	cout << res;
}