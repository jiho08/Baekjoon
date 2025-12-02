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

	vector<int> dp(n + 1, 10000000);

	dp[0] = 0;

	for (int i = 2; i <= n; ++i)
	{
		if (i >= 5)
			dp[i] = min(dp[i - 5] + 1, dp[i]);
      
		if (i >= 2)
			dp[i] = min(dp[i - 2] + 1, dp[i]);
	}

	if (dp[n] == 10000000)
		cout << -1;
	else
		cout << dp[n];
}