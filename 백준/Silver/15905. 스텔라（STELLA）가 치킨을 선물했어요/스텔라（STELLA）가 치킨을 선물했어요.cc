#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (auto& [a, b] : v)
		cin >> a >> b;

	sort(v.begin(), v.end(), [](const auto a, const auto b)
	{
			if (a.first == b.first)
				return a.second < b.second;

			return a.first > b.first;
	});

	for (int i = 5; i < n; ++i)
		if (v[4].first == v[i].first)
			++cnt;

	cout << cnt;
}