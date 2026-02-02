#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r, b;
	cin >> r >> b;

	int c = 1;

	while (true)
	{
		if ((r + b) % c == 0)
		{
			int l = c;
			int w = (r + b) / c;
			int x = 0, y = 0;

			bool flag = false;

			for (int i = 0; i < w; ++i)
			{
				for (int j = 0; j < l; ++j)
				{
					if (i == 0 || j == 0 || i == w - 1 || j == l - 1)
						++x;
					else
						++y;
				}
			}

			if (x == r && y == b)
			{
				cout << w << ' ' << l << '\n';
				break;
			}
		}

		++c;
	}
}