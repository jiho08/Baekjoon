#include <algorithm>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	double r;
	cin >> r;

	cout << fixed;
	cout.precision(6);

	cout << M_PI * r * r << '\n';
	cout << r * r + r * r;
}