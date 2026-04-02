#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r, g, b;
	cin >> r >> g >> b;

	double r2 = r / 255.0, g2 = g / 255.0, b2 = b / 255.0;
	double k = 1 - max({ r2, g2, b2 });
	double c = (1 - r2 - k) / (1 - k);
	double m = (1 - g2 - k) / (1 - k);
	double y = (1 - b2 - k) / (1 - k);

	if (k == 1)
		cout << 0 << ' ' << 0 << ' ' << 0 << ' ' << 1;
	else
		cout << c << ' ' << m << ' ' << y << ' ' << k;
}