#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> item(n);
	vector dp(n + 1, vector<int>(k + 1));

	for (auto& [w, v] : item)
		cin >> w >> v;

	for (int i = 1; i <= n; ++i)
	{
		const int w = item[i - 1].first;
		const int v = item[i - 1].second;

		for (int j = 1; j <= k; ++j)
			if (j >= w)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v);
			else
				dp[i][j] = dp[i - 1][j];
	}

	cout << dp[n][k];
}