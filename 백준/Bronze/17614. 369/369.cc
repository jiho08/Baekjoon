#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int t = i;

		while (t > 0)
		{
			const int x = t % 10;

			if (x == 3 || x == 6 || x == 9)
				++cnt;

			t /= 10;
		}
	}

	cout << cnt;
}