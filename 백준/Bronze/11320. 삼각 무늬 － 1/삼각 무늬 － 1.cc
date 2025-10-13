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
		int a, b;
		cin >> a >> b;

		int sum = 0;

		for (int i = 1; i <= a / b; ++i)
			sum += i;

		for (int i = 1; i <= a / b - 1; ++i)
			sum += i;

		cout << sum << '\n';
	}
}