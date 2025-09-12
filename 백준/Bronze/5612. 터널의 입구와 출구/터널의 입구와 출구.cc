#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int ans = m;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		m += a - b;

		if (m < 0)
		{
			cout << 0;
			return 0;
		}

		ans = max(ans, m);
	}

	cout << ans;
}