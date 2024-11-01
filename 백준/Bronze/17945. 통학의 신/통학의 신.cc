#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;

	double plus = -a + sqrt(a * a - b);
	double minus = -a - sqrt(a * a - b);

	if (plus == minus)
		cout << plus;
	else
		cout << minus << ' ' << plus;
}