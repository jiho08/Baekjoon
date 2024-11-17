#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

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
		int n, count = 0;
		cin >> n;

		bool room[n] = {};

		for (int j = 1; j <= n; ++j)
			for (int k = j; k <= n; k += j)
				room[k - 1] = !room[k - 1];

		for (int j = 0; j < n; ++j)
			if (room[j])
				++count;

		cout << count << '\n';
	}
}