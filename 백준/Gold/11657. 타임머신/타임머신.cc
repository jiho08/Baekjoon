#include <iostream>
#include <vector>

using namespace std;

#define INF 2147483647

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<long long> dist(n + 1, INF);
	vector<vector<pair<int, int>>> graph(n + 1);
	bool isCycle = false;

	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].emplace_back(b, c);
	}

	dist[1] = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			for (int k = 0; k < graph[j].size(); ++k)
			{
				const int next = graph[j][k].first;
				const int cost = graph[j][k].second;

				if (dist[j] != INF && dist[next] > dist[j] + cost)
				{
					dist[next] = dist[j] + cost;

					if (i == n)
						isCycle = true;
				}
			}

	if (isCycle)
		cout << -1;
	else
		for (int i = 2; i <= n; ++i)
			if (dist[i] == INF)
				cout << "-1\n";
			else
				cout << dist[i] << '\n';
}