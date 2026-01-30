#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	double v = 0;

	cout << fixed;
	cout.precision(6);

	while (n--)
	{
		int a;
		cin >> a;

		v = 1.0 - (1.0 - v) * (1.0 - (static_cast<double>(a) / 100.0));
		cout << v * 100 << '\n';
	}
}