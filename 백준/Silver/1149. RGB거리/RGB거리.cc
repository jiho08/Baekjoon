#include <algorithm>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<array<int, 3>> house(n), dp(n);

	for (auto& a : house)
		cin >> a[0] >> a[1] >> a[2];

	dp[0] = house[0];

	for (int i = 1; i < n; ++i)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + house[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + house[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + house[i][2];
	}

	cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
}