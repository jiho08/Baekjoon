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
		int n, k, c = 0;
		cin >> n >> k;

		vector<int> v(n);

		for (int& i : v)
			cin >> i;

		for (int i = 0; i < n; ++i)
			c += v[i] / k;

		cout << c << '\n';
	}
}