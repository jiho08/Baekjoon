#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	pair<int, int> ans = {};

	for (int i = 1; i <= 5; ++i)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (ans.second < a + b + c + d)
		{
			ans.first = i;
			ans.second = a + b + c + d;
		}
	}

	cout << ans.first << ' ' << ans.second;
}