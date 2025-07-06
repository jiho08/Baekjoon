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
		int k, n = 1;
		cin >> k;

		while (--k)
			n = n * 2 + 1;

		cout << n << '\n';
	}
}