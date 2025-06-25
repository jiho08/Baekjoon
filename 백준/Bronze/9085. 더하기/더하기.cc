#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t, n, x, sum = 0;
	cin >> t;

	while (t--)
	{
		sum = 0;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			sum += x;
		}

		cout << sum << '\n';
	}
}