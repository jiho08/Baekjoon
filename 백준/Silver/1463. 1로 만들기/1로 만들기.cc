#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n + 1);

	v[1] = 0;

	for (int i = 2; i <= n; ++i)
	{
		int prev = INT16_MAX;

		if (i % 3 == 0)
			prev = v[i / 3];

		if (i % 2 == 0)
			prev = min(prev, v[i / 2]);

		prev = min(prev, v[i - 1]);

		v[i] = prev + 1;
	}

	cout << v[n];
}