#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n, ans = 0;
		cin >> n;

		while (true)
		{
			ans = max(ans, n);

			if (n == 1)
				break;

			if (n % 2 == 0)
				n /= 2;
			else
				n = n * 3 + 1;
		}

		cout << ans << '\n';
	}
}