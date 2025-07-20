#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k, ans = 0;
	cin >> n >> k;

	for (int i = 1; i <= k; ++i)
	{
		string s = to_string(n * i);
		reverse(s.begin(), s.end());

		ans = max(ans, stoi(s));
	}

	cout << ans;
}