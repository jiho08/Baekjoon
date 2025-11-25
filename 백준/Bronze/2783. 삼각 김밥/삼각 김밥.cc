#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	double x, y;
	cin >> x >> y;

	double minPrice = x / y;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		double a, b;
		cin >> a >> b;
		minPrice = min(a / b, minPrice);
	}

	cout << fixed;
	cout.precision(2);
	cout << minPrice * 1000;
}