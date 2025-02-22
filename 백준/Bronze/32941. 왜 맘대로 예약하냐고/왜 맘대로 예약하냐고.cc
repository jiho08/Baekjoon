#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool l = false;
	int t, x, n;
	cin >> t >> x >> n;

	vector<bool> b(n);

	for (int i = 0; i < n; ++i)
	{
		int o;
		cin >> o;

		for (int j = 0; j < o; ++j)
		{
			int p;
			cin >> p;

			if (p == x)
				b[i] = true;
		}
	}

	for (bool m : b)
		if (m == false)
		{
			l = true;
			break;
		}

	cout << (l ? "NO" : "YES");
}