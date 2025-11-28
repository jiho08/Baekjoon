#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	long long ans = 1;

	for (int i = a; i <= b; ++i)
	{
		const long long sum = 1 * i * (i + 1) / 2;
		ans = ans * (sum % 14579) % 14579;
	}

	cout << ans % 14579;
}