#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, w, ans = 0;
	cin >> n >> w;

	if (n >= 3)
	{
		ans += 20;

		if (n == 5)
			ans += 50;
	}

	if (w > 1000)
		ans -= 15;

	ans += 10 * n;

	cout << (ans > 0 ? ans : 0);
}