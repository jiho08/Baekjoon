#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector dist(100001, -1), cnt(100001, 0);
	queue<int> q;

	q.push(n);
	dist[n] = 0;
	cnt[n] = 1;

	while (!q.empty())
	{
		const int f = q.front();
		q.pop();

		for (int next : {f - 1, f + 1, f * 2})
			if (next >= 0 && next <= 100000)
			{
				if (dist[next] == -1)
				{
					dist[next] = dist[f] + 1;
					cnt[next] = cnt[f];
					q.push(next);
				}
				else if (dist[next] == dist[f] + 1)
					cnt[next] += cnt[f];
			}
	}

	cout << dist[k] << '\n' << cnt[k];
}