#include <iostream>
#include <vector>

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
		int n, s = 0;
		cin >> n;

		vector<int> r(n + 2);

		r[0] = 0;
		r[1] = 1;

		for (int i = 2; i <= n + 1; ++i)
			r[i] = r[i - 1] + i;

		for (int i = 1; i <= n; ++i)
			s += r[i + 1] * i;

		cout << s << '\n';
	}
}