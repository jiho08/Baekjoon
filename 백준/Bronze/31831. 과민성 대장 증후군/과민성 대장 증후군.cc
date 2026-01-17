#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, s = 0, cnt = 0;
	cin >> n >> m;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (const int i : v)
	{
		s = max(s + i, 0);

		if (s >= m)
			++cnt;
	}

	cout << cnt;
}