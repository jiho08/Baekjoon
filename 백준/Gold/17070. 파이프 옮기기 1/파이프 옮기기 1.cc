#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	struct Pipe
	{
		int x, y, dir;
	};

	int n, cnt = 0;
	cin >> n;

	vector v(n, vector<int>(n));

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	queue<Pipe> q;
	q.push({ 0, 1, 1 });

	while (!q.empty())
	{
		auto [x, y, dir] = q.front();
		q.pop();

		if (x == n - 1 && y == n - 1)
		{
			++cnt;
			continue;
		}

		if (dir == 1)
		{
			if (y + 1 < n && v[x][y + 1] == 0)
				q.push({ x, y + 1, 1 });

			if (x + 1 < n && y + 1 < n && v[x][y + 1] == 0
				&& v[x + 1][y] == 0 && v[x + 1][y + 1] == 0)
				q.push({ x + 1, y + 1, 3 });
		}
		else if (dir == 2)
		{
			if (x + 1 < n && v[x + 1][y] == 0)
				q.push({ x + 1, y, 2 });

			if (x + 1 < n && y + 1 < n && v[x][y + 1] == 0
				&& v[x + 1][y] == 0 && v[x + 1][y + 1] == 0)
				q.push({ x + 1, y + 1, 3 });
		}
		else
		{
			if (y + 1 < n && v[x][y + 1] == 0)
				q.push({ x, y + 1, 1 });

			if (x + 1 < n && v[x + 1][y] == 0)
				q.push({ x + 1, y, 2 });

			if (x + 1 < n && y + 1 < n && v[x + 1][y] == 0
				&& v[x][y + 1] == 0 && v[x + 1][y + 1] == 0)
				q.push({ x + 1, y + 1, 3 });
		}
	}

	cout << cnt;
}