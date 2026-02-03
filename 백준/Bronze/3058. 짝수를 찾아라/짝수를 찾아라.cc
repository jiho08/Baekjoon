#include <algorithm>
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

	while (t--)
	{
		int s = 0, m = 101;
		vector<int> v(7);

		for (int& i : v)
			cin >> i;

		for (const int i : v)
			if (i % 2 == 0)
			{
				s += i;
				m = min(m, i);
			}

		cout << s << ' ' << m << '\n';
	}
}