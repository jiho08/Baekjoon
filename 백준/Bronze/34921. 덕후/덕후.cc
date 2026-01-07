#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, t;
	cin >> a >> t;

	const int n = 10 + 2 * (25 - a + t);

	if (n > 0)
		cout << 10 + 2 * (25 - a + t);
	else
		cout << 0;
}