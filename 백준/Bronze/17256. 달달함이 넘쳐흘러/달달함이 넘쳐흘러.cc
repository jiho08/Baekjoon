#include <iostream>

using namespace std;

int main()
{
	int a[3] = {}, c[3] = {};

	for (int i = 0; i < 3; ++i)
		cin >> a[i];

	for (int i = 0; i < 3; ++i)
		cin >> c[i];

	c[0] -= a[2];
	c[1] /= a[1];
	c[2] -= a[0];

	for (int i : c)
		cout << i << ' ';
}