#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, p = 0, m = 1000000001;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (int i : v)
	{
		if (i == -1)
		{
			p += m;
            m = 1000000001;
			continue;
		}

		m = min(i, m);
	}

	cout << p + m;
}