#include <iostream>
using namespace std;

int main()
{
	cout << fixed;
	cout.precision(1);

	float m;
	cin >> m;

	cout << (m > 30 ? 15 + (m - 30) * 3 / 2 : m / 2);
}