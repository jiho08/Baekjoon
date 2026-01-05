#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, cnt = 0;
	cin >> n >> m;

	priority_queue<int> pq;

	for (int i = 0; i < n - 1; ++i)
	{
		int t;
		cin >> t;
		pq.push(t);
	}

	while (!pq.empty() && m <= pq.top())
	{
		const int t = pq.top() - 1;
		pq.pop();
		pq.push(t);
		++m;
		++cnt;
	}

	cout << cnt;
}