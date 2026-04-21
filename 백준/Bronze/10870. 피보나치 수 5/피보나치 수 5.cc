#include <iostream>
#include <vector>

using namespace std;

vector dp(21, -1);

int fibo(const int n)
{
	if (n <= 2)
	{
		if (n <= 0)
			return 0;

		return 1;
	}

	if (dp[n] == -1)
		dp[n] = fibo(n - 1) + fibo(n - 2);

	return dp[n];
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cout << fibo(n);
}