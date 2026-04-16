#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int first;
	cin >> first;

	vector board(3, vector(3, 0));

	const array<array<pair<int, int>, 3>, 8> lines =
	{ {
		{{{0,0},{0,1},{0,2}}},
		{{{1,0},{1,1},{1,2}}},
		{{{2,0},{2,1},{2,2}}},
		{{{0,0},{1,0},{2,0}}},
		{{{0,1},{1,1},{2,1}}},
		{{{0,2},{1,2},{2,2}}},
		{{{0,0},{1,1},{2,2}}},
		{{{0,2},{1,1},{2,0}}}
	} };

	int current = first;

	for (int i = 0; i < 9; ++i)
	{
		int x, y;
		cin >> x >> y;

		board[y - 1][x - 1] = current;

		for (const auto& line : lines)
		{
			const int a = board[line[0].first][line[0].second];
			const int b = board[line[1].first][line[1].second];
			const int c = board[line[2].first][line[2].second];

			if (a != 0 && a == b && b == c)
			{
				cout << a;
				return 0;
			}
		}

		current = (current == 1) ? 2 : 1;
	}

	cout << 0;
}