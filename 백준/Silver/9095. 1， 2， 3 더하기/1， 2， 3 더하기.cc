#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector<int> dp(11);

		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int i = 4; i <= n; ++i)
			dp[i] = dp[i - 1] * 2 - dp[i - 4];

		cout << dp[n] << '\n';
	}
}