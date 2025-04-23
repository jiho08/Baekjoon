#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		const double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		if (distance == 0)
			cout << (r1 == r2 ? -1 : 0) << '\n';
		else
		{
			if (r1 + r2 == distance || abs(r1 - r2) == distance)
				cout << 1 << '\n';
			else if (abs(r1 - r2) < distance && distance < r1 + r2)
				cout << 2 << '\n';
			else
				cout << 0 << '\n';
		}
	}
}