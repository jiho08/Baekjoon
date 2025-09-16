#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    double d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    const double a = (d1 + d2 - d3) / 2.0;
    const double b = d1 - a;
    const double c = d2 - a;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << -1;
        return 0;
    }

    cout << fixed;
    cout.precision(1);

    cout << 1 << '\n';
    cout << a << ' ' << b << ' ' << c << '\n';
}