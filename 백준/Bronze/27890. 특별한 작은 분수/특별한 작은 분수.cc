#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, n;
	cin >> x >> n;

	for (int i = 0; i < n; ++i)
		if (x % 2 == 0)
			x = x / 2 ^ 6;
		else
			x = x * 2 ^ 6;

	cout << x;
}