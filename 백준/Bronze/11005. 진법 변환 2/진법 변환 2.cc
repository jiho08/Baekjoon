#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, b;
	cin >> n >> b;

	string ans;

	while (n > 0)
	{
		const int t = n % b;

		if (t >= 10)
			ans += static_cast<char>(t + 55);
		else
			ans += to_string(t);

		n /= b;
	}

	reverse(ans.begin(), ans.end());

	cout << ans;
}