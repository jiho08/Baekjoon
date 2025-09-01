#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	cout << fixed;
	cout.precision(4);

	while (t--)
	{
		float f;
		string s;
		cin >> f >> s;

		if (s == "kg")
			cout << f * 2.2046f << " lb\n";
		else if (s == "lb")
			cout << f * 0.4536 << " kg\n";
		else if (s == "l")
			cout << f * 0.2642f << " g\n";
		else
			cout << f * 3.7854f << " l\n";
	}
}