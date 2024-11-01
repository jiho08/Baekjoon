#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;

	double x = -a + sqrt(a * a - b);
	double y = -a - sqrt(a * a - b);

	if (x == y)
		cout << x;
	else
		cout << y << ' ' << x;
}