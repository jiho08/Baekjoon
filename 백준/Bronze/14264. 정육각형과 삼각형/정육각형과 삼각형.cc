#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	double l;
	cin >> l;

	cout << fixed;
	cout.precision(9);
	cout << sqrt(3) * l * l / 4;
}