#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int l, r, s, q = 1;
		cin >> l >> r >> s;

		while (true)
		{
			q % 2 == 0 ? s -= q : s += q;

			++q;

			if (s == l || s == r)
				break;
		}

		cout << q << '\n';
	}
}