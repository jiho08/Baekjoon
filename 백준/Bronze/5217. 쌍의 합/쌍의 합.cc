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
		cout << "Pairs for " << n << ": ";

		bool first = true;

		for (int j = 1; j <= n / 2; ++j)
			if (n - j != j)
			{
				if (!first)
					cout << ", ";

				cout << j << ' ' << n - j;
				first = false;
			}

		cout << '\n';
	}
}