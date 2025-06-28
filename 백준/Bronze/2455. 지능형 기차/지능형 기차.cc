#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int ans = 0, cur = 0;

	for (int i = 0; i < 4; ++i)
	{
		int x, y;
		cin >> x >> y;

		cur -= x;
		cur += y;

		ans = max(cur, ans);
	}

	cout << ans;
}