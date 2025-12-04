#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n != 0)
	{
		int sum = 1, ans = 0;

		for ( int i = 1; i <= 5; ++i)
		{
			sum *= i;
			ans += sum * (n % 10);
			n /= 10;
		}

		cout << ans << '\n';
		cin >> n;
	}
}