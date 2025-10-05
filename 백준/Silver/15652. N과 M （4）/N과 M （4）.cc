#include <iostream>
#include <vector>

using namespace std;

void dfs(const int n, const int m, const int t, const int cnt, vector<int>& v)
{
	if (cnt == m)
	{
		for (const int i : v)
			cout << i << ' ';

		cout << '\n';
		return;
	}

	for (int i = t; i <= n; ++i)
	{
		v.push_back(i);
		dfs(n, m, i, cnt + 1, v);
		v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v;

	dfs(n, m, 1, 0, v);
}