#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> x(n), l(n);
	vector<char> c(n);

	for (int& i : x)
		cin >> i;

	for (int& i : l)
		cin >> i;

	for (char& h : c)
		cin >> h;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
				continue;

			if (abs(x[i] - x[j]) <= l[i] + l[j] && c[i] != c[j])
			{
				cout << "YES\n" << i + 1 << ' ' << j + 1;
				return 0;
			}
		}

	cout << "NO";
}