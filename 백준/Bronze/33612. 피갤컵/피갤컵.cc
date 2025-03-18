#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, y = 2024, d = 8;
	cin >> n;

	for (int i = 1; i < n; ++i)
		d += 7;

	if (d > 12)
	{
		y += d / 12;
		d %= 12;

		if (d == 0)
		{
			y -= 1;
			d = 12;
		}
	}

	cout << y << ' ' << d;
}