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

	vector v(n, vector<int>(n));
	vector<int> bit(n);

	for (auto& a : v)
		for (int& i : a)
			cin >> i;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i == j || v[i][j] == 0)
				continue;

			bit[i] |= v[i][j];
			bit[j] |= v[i][j];
		}

	for (const int i : bit)
		cout << i << ' ';
}