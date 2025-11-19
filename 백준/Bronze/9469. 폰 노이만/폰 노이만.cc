#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int p;
	cin >> p;

	while (p--)
	{
		int n;
		double d, a, b, f;
		cin >> n >> d >> a >> b >> f;

		double time = d / (a + b);
		double dist = time * f;

		cout << fixed;
		cout.precision(6);
		cout << n << ' ' << dist << '\n';
	}
}