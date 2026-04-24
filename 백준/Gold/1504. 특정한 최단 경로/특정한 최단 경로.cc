#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> dijkstra(int start, const vector<vector<pair<int, int>>>& graph)
{
	vector dist(graph.size(), 2147483647);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	
	dist[start] = 0;
	pq.emplace(0, start);

	while (!pq.empty())
	{
		auto [curDist, curNode] = pq.top();
		pq.pop();

		if (curDist > dist[curNode])
			continue;

		for (const auto& [nextNode, cost] : graph[curNode])
		{
			int nextDist = curDist + cost;

			if (nextDist < dist[nextNode])
			{
				dist[nextNode] = nextDist;
				pq.emplace(nextDist, nextNode);
			}
		}
	}

	return dist;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, e;
	cin >> n >> e;

	vector<vector<pair<int, int>>> graph(n + 1);

	while (e--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].emplace_back(b, c);
		graph[b].emplace_back(a, c);
	}

	int x, y;
	cin >> x >> y;

	const vector<int> dist1 = dijkstra(1, graph);
	const vector<int> dist2 = dijkstra(x, graph);
	const vector<int> dist3 = dijkstra(y, graph);

	const long long path1 = (long long)dist1[x] + dist2[y] + dist3[n];
	const long long path2 = (long long)dist1[y] + dist3[x] + dist2[n];
	const long long ans = min(path1, path2);

	if (ans >= 2147483647)
		cout << -1;
	else
		cout << ans;
}