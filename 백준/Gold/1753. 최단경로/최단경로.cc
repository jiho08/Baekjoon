#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int v, e, k;
	cin >> v >> e >> k;

	vector<vector<pair<int, int>>> graph(v + 1);
	vector dist(v + 1, 2147483647);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	while (e--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].emplace_back(b, c);
	}

	dist[k] = 0;
	pq.emplace(0, k);

	while (!pq.empty())
	{
		auto [curDist, curNode] = pq.top();
		pq.pop();

		if (dist[curNode] < curDist)
			continue;

		for (auto [next, cost] : graph[curNode])
		{
			int nextDist = curDist + cost;

			if (dist[next] > nextDist)
			{
				dist[next] = nextDist;
				pq.emplace(nextDist, next);
			}
		}
	}

	for (int i = 1; i <= v; ++i)
	{
		if (dist[i] == 2147483647)
			cout << "INF\n";
		else
			cout << dist[i] << '\n';
	}
}