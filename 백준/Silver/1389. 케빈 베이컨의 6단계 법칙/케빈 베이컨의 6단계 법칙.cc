#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, ans = 0, min = 2147483647;
	cin >> n >> m;

	vector<vector<int>> graph(n + 1);

	while (m--)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; ++i)
	{
		vector dist(n + 1, -1);
		queue<int> q;

		q.push(i);
		dist[i] = 0;

		while (!q.empty())
		{
			const int f = q.front();
			q.pop();

			for (const int t : graph[f])
				if (dist[t] == -1)
				{
					dist[t] = dist[f] + 1;
					q.push(t);
				}
		}

		int sum = 0;

		for (int j = 1; j <= n; ++j)
			sum += dist[j];

		if (sum < min)
		{
			min = sum;
			ans = i;
		}
	}

	cout << ans;
}