#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int x;
	cin >> x;

	for (int i = x + 1; i <= 9999; ++i)
	{
		const int a = i / 100;
		const int b = i % 100;
		const int c = pow(a + b, 2);

		if (c == i)
		{
			cout << i;
			return 0;
		}
	}

	cout << -1;
}