#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 99;
	cin >> n;

	if (n < 100)
	{
		cout << n;
		return 0;
	}

	for (int i = 100; i <= n; ++i)
		if (i < 1000)
		{
			const int a = i / 100, b = (i / 10) % 10, c = i % 10;

			if (a - b == b - c)
				++cnt;
		}

	cout << cnt;
}