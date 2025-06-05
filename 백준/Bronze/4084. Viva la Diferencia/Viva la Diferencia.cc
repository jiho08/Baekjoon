#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	while (a != 0 || b != 0 || c != 0 || d != 0)
	{
		int count = 0;

		while (a != b || b != c || c != d)
		{
			const int q = a, w = b, e = c, r = d;

			a = abs(q - w);
			b = abs(w - e);
			c = abs(e - r);
			d = abs(r - q);

			++count;
		}

		cout << count << '\n';
		cin >> a >> b >> c >> d;
	}
}