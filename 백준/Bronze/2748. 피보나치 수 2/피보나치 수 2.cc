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

	vector<long long> dp(n + 1);

	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[n];
}