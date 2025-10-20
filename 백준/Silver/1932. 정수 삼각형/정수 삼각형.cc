#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp(const int i, const int j, const int n, vector<vector<int>>& triangle, vector<vector<int>>& memo)
{
	if (i == n)
		return 0;

	if (memo[i][j] == -1)
		return memo[i][j] = triangle[i][j] + max(dp(i + 1, j, n , triangle, memo), dp(i + 1, j + 1, n, triangle, memo));

	return memo[i][j];
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<vector<int>> triangle(n);

	for (int i = 1; i <= n; ++i)
		for (int j = 0; j < i; ++j)
		{
			int t;
			cin >> t;
			triangle[i - 1].push_back(t);
		}

	vector memo(n + 1, vector(n, -1));

	cout << dp(0, 0, n, triangle, memo);
}