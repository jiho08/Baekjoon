#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	const long long d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	cout << (d < r1 + r2 ? "YES" : "NO");
}