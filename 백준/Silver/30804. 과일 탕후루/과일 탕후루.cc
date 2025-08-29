#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, ans = 0;
	cin >> n;

	vector<int> v(n), cnt(10);

	for (int& i : v)
		cin >> i;

	int left = 0, fruit = 0;

	for (int right = 0; right < n; ++right)
	{
		if (!cnt[v[right]])
			++fruit;

		++cnt[v[right]];

		while (fruit > 2)
		{
			--cnt[v[left]];

			if (!cnt[v[left++]])
				--fruit;
		}

		ans = max(ans, right - left + 1);
	}

	cout << ans;
}