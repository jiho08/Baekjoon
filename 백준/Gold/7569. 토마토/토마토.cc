#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m, n, h, day = 0, tomato = 0, curTomato = 0;
	cin >> m >> n >> h;

	vector box(h, vector(n, vector<int>(m)));
	vector visited(h, vector(n, vector<int>(m)));
	vector<tuple<int, int, int>> dir = { {1, 0, 0}, {-1, 0, 0},
		{0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1} };
	queue<tuple<int, int, int>> q;

	for (int i = 0; i < h; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < m; ++k)
			{
				int t;
				cin >> t;

				box[i][j][k] = t;

				if (t == 1)
				{
					++tomato;
					q.emplace(i, j, k);
				}
			}

	while (!q.empty())
	{
		auto [z, y, x] = q.front();
		q.pop();
		++curTomato;

		for (const auto& [dz, dy, dx] : dir)
		{
			int nz = dz + z, ny = dy + y, nx = dx + x;

			if (nz >= 0 && nz < h && nx >= 0 && nx < m && ny >= 0 && ny < n)
				if (!visited[nz][ny][nx] && box[nz][ny][nx] == 0)
				{
					visited[nz][ny][nx] = true;
					box[nz][ny][nx] = 1;
					q.emplace(nz, ny, nx);
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

	for (int i = 0; i < h; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < m; ++k)
				if (box[i][j][k] == 0)
				{
					isFull = false;
					break;
				}

	cout << (isFull ? day - 1 : -1);
}