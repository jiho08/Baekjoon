#include <algorithm>
#include <iostream>

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
		int n;
		cin >> n;

		long long s = 0;

		for (int i = 0; i < n; ++i)
		{
			long long a;
			cin >> a;
			s += a % n;
		}

		cout << (s % n == 0 ? "YES\n" : "NO\n");
	}
}