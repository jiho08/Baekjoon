#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int l, r, s;
		cin >> l >> r >> s;

		l = abs(l - s);
		r = abs(r - s);

		int q = l < r ? l * 2 + 1 : r * 2;

		cout << q << '\n';
	}
}