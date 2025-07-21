#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, ans = 0;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (auto& p : v)
		cin >> p.second >> p.first;

	sort(v.begin(), v.end());

	++ans;
	int endTime = v[0].first;

	for (int i = 1; i < v.size(); ++i)
		if (v[i].second >= endTime)
		{
			++ans;
			endTime = v[i].first;
		}

	cout << ans;
}