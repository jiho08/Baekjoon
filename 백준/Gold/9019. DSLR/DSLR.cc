#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	const vector commands = { 'D', 'S', 'L', 'R' };

	while (t--)
	{
		int a, b;
		cin >> a >> b;

		vector visited(10000, false);
		vector<int> prev(10000);
		vector<char> com(10000);
		queue<int> q;
		string res;

		q.push(a);
		visited[a] = true;

		while (!q.empty())
		{
			const int f = q.front();
			q.pop();

			if (f == b)
				break;

			for (const char c : commands)
			{
				int n;

				switch (c)
				{
				case 'D':
					n = f * 2 % 10000;
					break;
				case 'S':
					n = f == 0 ? 9999 : f - 1;
					break;
				case 'L':
					n = f % 1000 * 10 + f / 1000;
					break;
				case 'R':
					n = f % 10 * 1000 + f / 10;
					break;
				}

				if (!visited[n])
				{
					visited[n] = true;
					q.push(n);
					prev[n] = f;
					com[n] = c;
				}
			}
		}

		for (int i = b; i != a; i = prev[i])
			res.push_back(com[i]);

		reverse(res.begin(), res.end());

		cout << res << '\n';
	}
}