#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> v(21);

	v[0] = 1;
	v[1] = 2;

	for (int i = 2; i < 21; ++i)
		v[i] = v[i - 1] + v[i - 2];

	int t;
	cin >> t;

	while (t--)
	{
		int x, ans = 0;
		cin >> x;

		for (int i = 20; i > 0; --i)
			if (x >= v[i])
			{
				x -= v[i];
				ans += v[i - 1];
			}

		cout << ans << '\n';
	}
}