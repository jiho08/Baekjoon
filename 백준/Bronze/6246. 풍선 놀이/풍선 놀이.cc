#include <iostream>

using namespace std;

int main()
{
	int n, q, c = 0;
	cin >> n >> q;

	int r[n] = {};

	for (int j = 0; j < q; ++j)
	{
		int l, i;
		cin >> l >> i;

		r[--l] = 1;

		while (true)
		{
			r[l += i] = 1;

			if (l + i >= n)
				break;
		}
	}

	for (int i = 0; i < n; ++i)
		if (r[i] == 0)
			++c;

	cout << c;
}