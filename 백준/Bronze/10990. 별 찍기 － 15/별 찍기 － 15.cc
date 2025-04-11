#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = n - i - 1; j > 0; --j)
			cout << ' ';

		cout << '*';

		for (int j = 0; j < i * 2 - 1; ++j)
			cout << ' ';

		if (i != 0)
			cout << '*';

		cout << '\n';
	}
}