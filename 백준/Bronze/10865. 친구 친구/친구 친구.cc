#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n);

	while (m--)
	{
		int a, b;
		cin >> a >> b;
		v[a - 1].push_back(0);
		v[b - 1].push_back(0);
	}

	for (const auto& a : v)
		cout << a.size() << '\n';
}