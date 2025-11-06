#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector dist(100001, -1);
	deque<int> dq;

	dq.push_back(n);
	dist[n] = 0;

	while (!dq.empty())
	{
		const int f = dq.front();
		dq.pop_front();

		if (f == k)
			break;

		if (f * 2 <= 100000 && (dist[f * 2] == -1 || dist[f * 2] > dist[f]))
		{
			dist[f * 2] = dist[f];
			dq.push_front(f * 2);
		}

		for (int next : {f - 1, f + 1})
			if (next >= 0 && next <= 100000 && dist[next] == -1)
			{
				dist[next] = dist[f] + 1;
				dq.push_back(next);
			}
	}

	cout << dist[k];
}