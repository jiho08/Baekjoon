#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void dfs(const int n, const int m, const int cnt, vector<int>& v, vector<int>& ans, vector<bool>& visited)
{
	if (cnt == m)
	{
		for (const int i : ans)
			cout << i << ' ';

		cout << '\n';
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (visited[i])
			continue;

		visited[i] = true;
		ans.push_back(v[i]);

		dfs(n, m, cnt + 1, v, ans, visited);

		ans.pop_back();
		visited[i] = false;
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
	vector visited(n, false);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	dfs(n, m, 0, v, ans, visited);
}