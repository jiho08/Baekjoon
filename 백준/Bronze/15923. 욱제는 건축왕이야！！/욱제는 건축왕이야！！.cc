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

	vector<pair<int,int>> v(n);

	for (auto& a : v)
		cin >> a.first >> a.second;

	for (int i = 1; i < n; ++i)
		ans += abs(v[i].first - v[i - 1].first) + abs(v[i].second - v[i - 1].second);

	ans += abs(v[n - 1].first - v[0].first) + abs(v[n - 1].second - v[0].second);
	cout << ans;
}