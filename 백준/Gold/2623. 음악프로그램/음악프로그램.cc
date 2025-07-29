#include <iostream>
#include <vector>
#include <string>
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
	queue<int> q;
	string ans;
	bool isPossible = true;

	while (m--)
	{
		int t;
		cin >> t;

		int a;
		cin >> a;

		for (int i = 0; i < t - 1; ++i)
		{
			int b;
			cin >> b;

			graph[a].push_back(b);
			++inDegree[b];

			a = b;
		}
	}

	for (int i = 1; i <= n; ++i)
		if (inDegree[i] == 0)
			q.push(i);

	for (int i = 1; i <= n; ++i)
	{
		if (q.empty())
		{
			isPossible = false;
			break;
		}

		const int f = q.front();
		q.pop();
		ans += to_string(f) + '\n';

		for (const int x : graph[f])
			if (--inDegree[x] == 0)
				q.push(x);
	}

	cout << (isPossible ? ans : "0");
}