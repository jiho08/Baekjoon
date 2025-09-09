#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int minX = 10001, maxX = -10001, minY = 10001, maxY = -10001;

	while (n--)
	{
		int x, y;
		cin >> x >> y;

		maxX = max(x, maxX);
		minX = min(x, minX);
		maxY = max(y, maxY);
		minY = min(y, minY);
	}

	cout << (maxX - minX) * (maxY - minY);
}