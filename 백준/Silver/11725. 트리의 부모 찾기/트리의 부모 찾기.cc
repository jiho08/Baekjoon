#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<vector<int>> graph(n + 1);
	vector parent(n + 1, 0);

	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	queue<int> q;
	q.push(1);
	parent[1] = -1;

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();

		for (int i : graph[f])
			if (parent[i] == 0)
			{
				parent[i] = f;
				q.push(i);
			}
	}

	for (int i = 2; i <= n; ++i)
		cout << parent[i] << '\n';
}
