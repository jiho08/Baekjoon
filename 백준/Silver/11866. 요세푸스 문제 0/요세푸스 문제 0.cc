#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	queue<int> q;

	for (int i = 1; i <= n; ++i)
		q.push(i);

	cout << '<';

	for (int i = 1; !q.empty(); ++i)
		if (i == k)
		{
			cout << q.front();
			q.pop();
			i = 0;

			if (!q.empty())
				cout << ", ";
		}
		else
		{
            q.push(q.front());
			q.pop();
		}

	cout << '>';
}