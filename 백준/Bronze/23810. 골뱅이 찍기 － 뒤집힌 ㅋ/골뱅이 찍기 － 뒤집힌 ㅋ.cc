#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n * 5; ++k)
				cout << '@';

			cout << '\n';
		}


		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
				cout << '@';

			cout << '\n';
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << '@';

		cout << '\n';
	}
}