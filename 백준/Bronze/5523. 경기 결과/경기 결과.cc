#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, x = 0, y = 0;
	cin >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		if (a > b)
			++x;
		else if (b > a)
			++y;
	}

	cout << x << ' ' << y;
}