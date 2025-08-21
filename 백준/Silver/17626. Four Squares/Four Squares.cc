#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector dp(n + 1, 5);
	dp[0] = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j * j <= i; ++j)
			dp[i] = min(dp[i], dp[i - j * j] + 1);

	cout << dp[n];
}