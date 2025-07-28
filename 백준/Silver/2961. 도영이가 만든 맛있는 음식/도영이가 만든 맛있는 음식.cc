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

	vector<pair<int, int>> v(n);

	for (auto& [s, b] : v)
		cin >> s >> b;

	int sum = 1000000000;

	for (int i = 1; i < 1 << n; ++i)
	{
		int s = 1;
		int b = 0;

		for (int j = 0; j < n; ++j)
			if (i >> j & 1)
			{
				s *= v[j].first;
				b += v[j].second;
			}

		sum = min(sum, abs(s - b));
	}

	cout << sum;
}