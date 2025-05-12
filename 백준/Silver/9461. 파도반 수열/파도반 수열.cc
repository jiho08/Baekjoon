#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        vector<long long> dp(n + 3);

        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;

        for (int i = 4; i <= n; ++i)
            dp[i] = dp[i - 2] + dp[i - 3];

        cout << dp[n] << '\n';
    }
}