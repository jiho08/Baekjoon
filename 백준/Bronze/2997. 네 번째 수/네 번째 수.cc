#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r[3];
	cin >> r[0] >> r[1] >> r[2];

	sort(r, r + 3);

	const int d1 = r[1] - r[0], d2 = r[2] - r[1];

	if (d1 == d2)
		cout << r[2] + d1;
	else if (d1 > d2)
		cout << r[0] + d2;
	else
		cout << r[1] + d1;
}