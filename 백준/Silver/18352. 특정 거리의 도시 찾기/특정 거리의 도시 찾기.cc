#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
	int n, m, k, x;
	cin >> n >> m >> k >> x;

	vector<vector<int>> graph(n + 1);
	vector<int> visited(n + 1, -1);
	queue<int> q;
	string ans;
	bool flag = false;

	while (m--)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
	}

	q.push(x);
	visited[x] = 0;

	while (!q.empty())
	{
		int f = q.front();
		q.pop();

		for (int i = 0; i < graph[f].size(); ++i)
			if (visited[graph[f][i]] == -1)
			{
				visited[graph[f][i]] = visited[f] + 1;
				q.push(graph[f][i]);
			}
	}

	for (int i = 0; i < visited.size(); ++i)
		if (visited[i] == k)
		{
			flag = true;
			ans += to_string(i) + '\n';
		}

	if (flag)
		cout << ans;
	else
		cout << -1;
}