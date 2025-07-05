#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, d;
	cin >> n >> d;

	vector<vector<char>> v(n, vector<char>(n));

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); ++j)
			v[i][j] = s[j];
	}

	for (const auto& a : v)
	{
		for (const auto c : a)
			switch (c)
			{
			case 'd':
				cout << (d == 1 ? 'q' : 'b');
				break;

			case 'b':
				cout << (d == 1 ? 'p' : 'd');
				break;

			case 'q':
				cout << (d == 1 ? 'd' : 'p');
				break;

			case 'p':
				cout << (d == 1 ? 'b' : 'q');
				break;
			}

		cout << '\n';
	}
}