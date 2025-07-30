#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INF 2147483647

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	priority_queue<pair<int, int>> pq;
	vector<int> dist(n + 1, INF);
	vector<vector<pair<int, int>>> graph(n + 1);

	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].emplace_back(b, c);
	}

	int start, end;
	cin >> start >> end;
	dist[start] = 0;
	pq.emplace(0, start);

	while (!pq.empty())
	{
		const int topDist = -pq.top().first;
		const int topNode = pq.top().second;
		pq.pop();

		if (dist[topNode] < topDist)
			continue;

		for (const auto& [n, d] : graph[topNode])
		{
			const int nextDist = topDist + d;
			int nextNode = n;

			if (nextDist < dist[nextNode])
			{
				dist[nextNode] = nextDist;
				pq.emplace(-nextDist, nextNode);
			}
		}
	}

	cout << dist[end];
}