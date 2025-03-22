#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int s, n;
		cin >> s >> n;

		for (int i = 0; i < n; ++i)
		{
			int q, p;
			cin >> q >> p;

			s += q * p;
		}

		cout << s << '\n';
	}
}