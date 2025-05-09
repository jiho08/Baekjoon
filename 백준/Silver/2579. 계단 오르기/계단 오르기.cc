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

    vector<int> score(n), dp(n + 1, 0);

    for (int& i : score)
        cin >> i;

    dp[1] = score[0];
    dp[2] = dp[1] + score[1];

    for (int i = 3; i <= n; ++i)
        dp[i] = max(dp[i - 2] + score[i - 1], dp[i - 3] + score[i - 2] + score[i - 1]);

    cout << dp[n];
}