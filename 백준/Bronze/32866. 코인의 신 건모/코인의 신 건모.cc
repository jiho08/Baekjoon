#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	double a = n * (1.0 - x / 100.0);
	double b = (n / a - 1.0) * 100.0;
	cout << fixed;
	cout.precision(6);
	cout << b << '\n';
}