#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector v(n, vector<int>(n)), dp(n + 1, vector<int>(n + 1));

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	dp[1][1] = v[0][0];

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + v[i - 1][j - 1];

	while (m--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << '\n';
	}
}