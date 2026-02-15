#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;

		int c = 0;
		const int n = sqrt(s.size());
		vector v(n, vector<char>(n));

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				v[i][j] = s[c++];

		for (int i = n - 1; i >= 0; --i)
			for (int j = 0; j < n; ++j)
				cout << v[j][i];

		cout << '\n';
	}
}