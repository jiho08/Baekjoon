#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector dist(100001, -1);
	queue<int> q;
  
	q.push(n);
	dist[n] = 0;

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();

		if (f == k)
			break;

		for (int next : {f - 1, f + 1, f * 2})
			if (next >= 0 && next <= 100000 && dist[next] == -1)
			{
				dist[next] = dist[f] + 1;
				q.push(next);
			}
	}

	cout << dist[k];
}