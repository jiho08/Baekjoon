#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, a, b, x = 1, y = 1;
	cin >> n >> a >> b;

	for (int i = 0; i < n; ++i)
	{
		x += a;
		y += b;

		if (y > x)
		{
			int t = x;
			x = y;
			y = t;
		}

		if (x == y)
			--y;
	}

	cout << x << ' ' << y;
}