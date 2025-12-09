#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector v(n, vector<int>(n));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			char c;
			cin >> c;

			if (c != '.')
				v[i][j] = c - '0';
		}

	const vector<pair<int, int>> dir = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (v[i][j] != 0)
			{
				cout << '*';
				continue;
			}

			int sum = 0;

			for (const auto& [x, y] : dir)
				if (x + j >= 0 && y + i >= 0 && x + j < n && y + i < n)
					sum += v[y + i][x + j];

			if (sum > 9)
				cout << 'M';
			else
				cout << sum;
		}

		cout << '\n';
	}
}