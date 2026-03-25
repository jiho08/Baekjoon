#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, pos = 1, cnt = 0;
	cin >> n >> m;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	while (m--)
	{
		int t;
		cin >> t;

		pos += t;
		++cnt;

		if (pos >= n)
			break;

		if (v[pos - 1] != 0)
			pos += v[pos - 1];

		if (pos >= n)
			break;
	}

	cout << cnt;
}