#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector v(2, vector<int>(n)), dp(2, vector<int>(n + 1));

		for (auto& a : v)
			for (int& i : a)
				cin >> i;

		dp[0][1] = v[0][0];
		dp[1][1] = v[1][0];

		for (int i = 2; i <= n; ++i)
		{
			dp[0][i] = v[0][i - 1] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = v[1][i - 1] + max(dp[0][i - 1], dp[0][i - 2]);
		}

		cout << max(dp[0][n], dp[1][n]) << '\n';
	}
}