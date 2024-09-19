#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	int a, b, c, d, q, r;
	cin >> n >> m;

	a = 100 - n;
	b = 100 - m;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;

	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << endl;
	cout << c + q << " " << r;

	return 0;
}