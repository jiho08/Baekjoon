#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n * 4; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << '@';

		cout << '\n';
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n * 5; ++j)
			cout << '@';

		cout << '\n';
	}
}