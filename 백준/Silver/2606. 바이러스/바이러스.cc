#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, sum = 0;
	cin >> n >> m;

	vector<vector<int>> net(n + 1);
	vector<bool> visit(n + 1, false);
	queue<int> q;

	while (m--)
	{
		int x, y;
		cin >> x >> y;

		net[x].push_back(y);
		net[y].push_back(x);
	}

	q.push(1);
	visit[1] = true;

	while (!q.empty())
	{
		const int t = q.front();
		q.pop();
		++sum;

		for (int k : net[t])
			if (!visit[k])
			{
				q.push(k);
				visit[k] = true;
			}
	}

	cout << sum - 1;
}