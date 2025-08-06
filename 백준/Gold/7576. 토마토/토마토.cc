#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m, n, day = 0, tomato = 0, curTomato = 0;;
	cin >> m >> n;

	vector box(n, vector<int>(m));
	vector visited(n, vector(m, false));
	vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			int t;
			cin >> t;

			box[i][j] = t;

			if (t == 1)
			{
				++tomato;
				q.emplace(i, j);
			}
		}

	while (!q.empty())
	{
		auto [y, x] = q.front();
		q.pop();
		++curTomato;

		for (auto [dy, dx] : dir)
		{
			int ny = dy + y, nx = dx + x;

			if (nx >= 0 && nx < m && ny >= 0 && ny < n)
				if (!visited[ny][nx] && box[ny][nx] == 0)
				{
					visited[ny][nx] = true;
					box[ny][nx] = 1;
					q.emplace(ny, nx);
				}
		}

		if (curTomato == tomato)
		{
			curTomato = 0;
			tomato = q.size();
			++day;
		}
	}

	bool isFull = true;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (box[i][j] == 0)
			{
				isFull = false;
				break;
			}

	cout << (isFull ? day - 1 : -1);
}