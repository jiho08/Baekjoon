#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r, b, cnt = 1;
	cin >> r >> b;

	while (true)
	{
		if ((r + b) % cnt == 0)
		{
			const int l = cnt, w = (r + b) / cnt;
			int x = 0, y = 0;

			for (int i = 0; i < w; ++i)
				for (int j = 0; j < l; ++j)
					++(i == 0 || j == 0 || i == w - 1 || j == l - 1 ? x : y);

			if (x == r && y == b)
			{
				cout << w << ' ' << l << '\n';
				break;
			}
		}

		++cnt;
	}
}