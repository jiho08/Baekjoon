#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, cnt = 0;
	cin >> x;

	while (x > 0)
	{
		if (x % 2 == 1)
			++cnt;

		x /= 2;
	}

	cout << cnt;
}