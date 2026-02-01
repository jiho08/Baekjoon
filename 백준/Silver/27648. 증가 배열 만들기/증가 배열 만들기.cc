#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, k, t = 0;
	cin >> n >> m >> k;

	vector v(n, vector<int>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= m; ++j)
			v[i][j - 1] = j + t;

		++t;
	}

	if (v[n - 1][m - 1] > k)
		cout << "NO";
	else
	{
		cout << "YES\n";

		for (auto& a : v)
		{
			for (const int& i : a)
				cout << i << ' ';

			cout << '\n';
		}
	}
}
