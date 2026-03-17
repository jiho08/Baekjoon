#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<bool> v(10001);

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x; j < y; ++j)
			v[j] = true;
	}

	cout << count(v.begin(), v.end(), true);
}