#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k, count = 0;
	cin >> n >> k;

	string ans;

	for (int i = 1; i <= n; ++i)
	{
		const int fx = i % 10;

		if (fx != k % 10 && fx != 2 * k % 10)
		{
			++count;
			ans += to_string(i) + ' ';
		}
	}

	cout << count << '\n' << ans;
}