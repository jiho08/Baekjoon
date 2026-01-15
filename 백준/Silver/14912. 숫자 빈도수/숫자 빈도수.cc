#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, d, ans = 0;
	cin >> n >> d;

	for (int i = 1; i <= n; ++i)
	{
		int t = i;

		while (t > 0)
		{
			if (t % 10 == d)
				++ans;

			t /= 10;
		}
	}

	cout << ans;
}