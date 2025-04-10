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
		cin >> xr[i] >> yr[i];

	sort(xr, xr + 3);
	sort(yr, yr + 3);

	cout << xr[(xr[0] == xr[1] ? 2 : 0)];
	cout << ' ';
	cout << yr[(yr[0] == yr[1] ? 2 : 0)];
}