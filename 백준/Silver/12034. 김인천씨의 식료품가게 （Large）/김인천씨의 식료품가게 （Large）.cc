#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		int n;
		cin >> n;

		vector<int> v(n * 2);

		for (int& j : v)
			cin >> j;

		cout << "Case #" << i << ": ";

		for (int j = 0; j < n * 2; ++j)
		{
			if (v[j] == -1)
				continue;

			for (int k = j + 1; k < n * 2; ++k)
				if (v[j] / 3 * 4 == v[k])
				{
					cout << v[j] << ' ';
					v[k] = v[j] = -1;
				}
		}

		cout << '\n';
	}
}