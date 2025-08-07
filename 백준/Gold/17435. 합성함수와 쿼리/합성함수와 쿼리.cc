#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m;
	cin >> m;

	vector<int> f(m);

	for (int& i : f)
		cin >> i;

	vector st(20, vector<int>(m + 1));

	for (int i = 1; i <= m; ++i)
		st[0][i] = f[i - 1];

	for (int i = 1; i < 20; ++i)
		for (int j = 1; j <= m; ++j)
			st[i][j] = st[i - 1][st[i - 1][j]];

	int q;
	cin >> q;

	while (q--)
	{
		int n, x;
		cin >> n >> x;

		for (int bit = 0; bit < 20; ++bit)
			if ((n & (1 << bit)) != 0)
				x = st[bit][x];

		cout << x << '\n';
	}
}