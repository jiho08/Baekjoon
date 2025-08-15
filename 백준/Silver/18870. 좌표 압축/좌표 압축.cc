#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, cnt = -1, prev = 1000000001;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v[i].first = x;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		if (prev != v[i].first)
			++cnt;

		prev = v[i].first;
		v[i].first = cnt;
	}

	sort(v.begin(), v.end(), [](const pair<int, int> a, const pair<int, int> b)
		{
			return a.second < b.second;
		});

	for (auto& p : v)
		cout << p.first << ' ';
}