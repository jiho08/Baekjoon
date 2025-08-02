#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int cnt = 0;

		while (n > 0)
		{
			if (n % 2 != 0)
				cout << cnt << ' ';

			++cnt;
			n >>= 1;
		}

		cout << '\n';
	}
}