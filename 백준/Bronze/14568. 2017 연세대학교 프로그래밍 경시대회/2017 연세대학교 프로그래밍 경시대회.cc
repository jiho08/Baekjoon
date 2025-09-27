#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	for (int a = 2; a < n; a += 2)
	{
		const int x = n - a;

		for (int b = 1; b < x; ++b)
		{
			const int c = x - b;

			if (c >= b + 2)
				++cnt;
		}
	}

	cout << cnt;
}