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
	vector<int> r(n,1);

	for (auto& p : v)
		cin >> p.first >> p.second;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				++r[i];

	for (const auto i : r)
		cout << i << ' ';
}