#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n), dp(n, 1);

	for (int& i : a)
		cin >> i;

	int ans = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);

		ans = max(ans, dp[i]);
	}

	cout << ans;
}