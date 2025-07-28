#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> graph(n + 1);
	vector<int> inDegree(n + 1, 0);
	priority_queue<int> q;

	while (m--)
	{
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
		++inDegree[b];
	}

	for (int i = 1; i <= n; ++i)
		if (inDegree[i] == 0)
			q.push(-i);

	for (int i = 1; i <= n; ++i)
	{
		if (q.empty())
			break;

		const int f = -q.top();
		q.pop();
		cout << f << ' ';

		for (const int x : graph[f])
			if (--inDegree[x] == 0)
				q.push(-x);
	}
}