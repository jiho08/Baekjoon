#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int r, c, ans[5] = {};
	cin >> r >> c;

	vector v(r, vector<char>(c));

	for (auto& a : v)
		for (char& c : a)
			cin >> c;

	for (int i = 0; i < r - 1; ++i)
		for (int j = 0; j < c - 1; ++j)
		{
			if (v[i][j] == '#' || v[i + 1][j] == '#' || v[i][j + 1] == '#' || v[i + 1][j + 1] == '#')
				continue;

			int s = 0;

			for (int a = i; a < i + 2; ++a)
				for (int b = j; b < j + 2; ++b)
					if (v[a][b] == 'X')
						++s;

			++ans[s];
		}

	for (const int i : ans)
		cout << i << '\n';
}