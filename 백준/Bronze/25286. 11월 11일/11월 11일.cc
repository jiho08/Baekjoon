#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isThirty(int m)
{
	int thirty[] = { 5,7,10,12 };

	for (int item : thirty)
		if (m == item)
			return true;

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int y, m, n = 0;
		cin >> y >> m;

		if (m == 3)
		{
			if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
				n = 29;
			else
				n = 28;
		}
		else if (isThirty(m))
			n = 30;
		else
			n = 31;

		if (m == 1)
		{
			m = 13;
			--y;
		}

		cout << y << ' ' << m - 1 << ' ' << n << '\n';
	}
}