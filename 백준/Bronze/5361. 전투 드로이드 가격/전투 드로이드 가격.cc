#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cout << fixed;
	cout.precision(2);

	while (t--)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		cout << '$' << a * 350.34f + b * 230.9f + c * 190.55f + d * 125.3f + e * 180.9f << '\n';
	}
}