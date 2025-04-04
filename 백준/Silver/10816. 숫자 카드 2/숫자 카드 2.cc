#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n;
	unordered_map<int, int> d;

	while (n--)
	{
		int t;
		cin >> t;

		if (d.count(t))
			++d[t];
		else
			d.emplace(t, 1);
	}

	cin >> m;
	vector<int> v(m);

	for (int& i : v)
		cin >> i;

	for (int i = 0; i < m; ++i)
		if (!d.count(v[i]))
			cout << "0 ";
		else
			cout << d[v[i]] << ' ';
}