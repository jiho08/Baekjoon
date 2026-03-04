#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int x, y, n;
	cin >> x >> y >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		if (a == x || b == y)
			cout << 0 << '\n';
		else
			cout << 1 << '\n';
	}
}