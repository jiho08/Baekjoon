#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n, d, count = 0;
		cin >> n >> d;
		float v[n], f[n], c[n];

		for (int i = 0; i < n; ++i)
			cin >> v[i] >> f[i] >> c[i];

		for (int i = 0; i < n; ++i)
			if (v[i] * f[i] / c[i] >= d)
				++count;

		cout << count << '\n';
	}
}