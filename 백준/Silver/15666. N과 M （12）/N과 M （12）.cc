#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void dfs(const int n, const int m, const int cnt, vector<int>& v, vector<int>& ans)
{
	if (cnt == m)
	{
		for (const int i : ans)
			cout << i << ' ';

		cout << '\n';
		return;
	}

	int prev = -1;

	for (int i = 0; i < n; ++i) 
	{
		if (prev == v[i] || (!ans.empty() && ans.back() > v[i]))
			continue;

		prev = v[i];
		ans.push_back(v[i]);

		dfs(n, m, cnt + 1, v, ans);

		ans.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n), ans;

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	dfs(n, m, 0, v, ans);
}