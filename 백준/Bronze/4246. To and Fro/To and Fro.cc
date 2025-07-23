#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	while (n != 0)
	{
		string s;
		cin >> s;

		const int m = s.size() / n;

		vector<vector<char>> v(m, vector<char>(n));

		int str = 0;

		for (int i = 0; i < m; ++i)
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; ++j)
					v[i][j] = s[str++];
			}
			else
				for (int j = n - 1; j >= 0; --j)
					v[i][j] = s[str++];

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				cout << v[j][i];

		cout << '\n';
		cin >> n;
	}
}