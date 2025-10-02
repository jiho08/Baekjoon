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
		int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
					cout << '#';
				else
					cout << 'J';

			cout << '\n';
		}

		cout << '\n';
	}
}