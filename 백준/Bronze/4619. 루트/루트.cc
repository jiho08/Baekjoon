#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (true)
	{
		int b, p;
		cin >> b >> p;

		if (b == 0 && p == 0)
			break;

		int a = 1;

		while (pow(a, p) < b)
			a++;

		int lower = pow(a - 1, p);
		int upper = pow(a, p);

		if (abs(b - lower) <= abs(b - upper))
			cout << a - 1 << '\n';
		else
			cout << a << '\n';
	}
}