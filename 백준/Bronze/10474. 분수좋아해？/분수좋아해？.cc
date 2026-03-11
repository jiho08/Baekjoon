#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	while (a != 0 || b != 0)
	{
		const int x = a / b;
		const int y = a % b;

		cout << x << ' ' << y << " / " << b << '\n';
		cin >> a >> b;
	}
}