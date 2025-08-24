#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k, p, ans = 0, cnt = 0;
	cin >> n >> k >> p;

	vector<int> v(n * k);

	for (int& i : v)
		cin >> i;

	for (int i = 0; i < n; ++i)
	{
		int zc = 0;

		for (int j = 0; j < k; ++j)
		{
			if (!v[cnt])
				++zc;

			++cnt;
		}

		if (zc < p)
			++ans;
	}

	cout << ans;
}