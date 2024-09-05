#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
	int a, b, c, d, e, x, y;
	cin >> a >> b >> c >> d >> e;

	x = a >= b ? b : a;
	x = x >= c ? c : x;

	y = d >= e ? e : d;

	cout << x + y - 50;

	return 0;
}
