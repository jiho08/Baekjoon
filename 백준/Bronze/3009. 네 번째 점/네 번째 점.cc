#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int xr[3], yr[3];

	for (int i = 0; i < 3; ++i)
	{
		int x, y;
		cin >> x >> y;

		xr[i] = x;
		yr[i] = y;
	}

	sort(xr, xr + 3);
	sort(yr, yr + 3);

	if (xr[0] == xr[1])
		cout << xr[2];
	else
		cout << xr[0];

	cout << ' ';

	if (yr[0] == yr[1])
		cout << yr[2];
	else
		cout << yr[0];
}