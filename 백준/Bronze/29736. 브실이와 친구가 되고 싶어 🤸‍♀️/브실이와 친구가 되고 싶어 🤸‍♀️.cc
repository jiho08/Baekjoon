#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, k, x, s = 0;
	cin >> a >> b >> k >> x;

	for (int i = a; i <= b; ++i)
		if (i >= k - x && i <= k + x)
			++s;

	s == 0 ? cout << "IMPOSSIBLE" : cout << s;
}