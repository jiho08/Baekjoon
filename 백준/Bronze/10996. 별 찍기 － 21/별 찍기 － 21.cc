#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	if (n % 2 == 0)
		for (int i = 0; i < n * 2; ++i)
		{
			for (int j = 0; j < n / 2; ++j)
				cout << "* ";

			cout << '\n';

			if (i % 2 == 0)
				cout << ' ';
		}
	else
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n / 2 + 1; ++j)
				cout << "* ";

			cout << '\n' << ' ';

			for (int j = 0; j < n / 2; ++j)
				cout << "* ";

			cout << '\n';
		}
}