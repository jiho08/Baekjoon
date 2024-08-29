#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	int a, b, c, d, e, s = 0;
	cin >> a >> b >> c >> d >> e;

	if (a < 0)
	{
		s = abs(a) * c;
		s += d;
		s += b * e;
		cout << s;
	}
	else
		cout << (b - a) * e;

	return 0;
}