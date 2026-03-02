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

	vector v(n, vector<int>(m));

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	int k;
	cin >> k;

	while (k--)
	{
		int i, j, x, y, s = 0;
		cin >> i >> j >> x >> y;

		for (int a = i - 1; a < x; ++a)
			for (int b = j - 1; b < y; ++b)
				s += v[a][b];

		cout << s << '\n';
	}
}