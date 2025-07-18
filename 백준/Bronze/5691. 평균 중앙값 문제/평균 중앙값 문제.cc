#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b;
	cin >> a >> b;

	while (a != 0 || b != 0)
	{
		int r[3] = { a, b, (a + b) / 2 };

		for (const int n : r)
		{
			int c = 3 * n - (a + b);

			const int minN = min({ a, b, c });
			const int maxN = max({ a, b, c });

			if (n == a + b + c - minN - maxN)
			{
				cout << c << '\n';
				break;
			}
		}

		cin >> a >> b;
	}
}