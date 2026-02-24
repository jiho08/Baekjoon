#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, cnt = 0;
	cin >> n;

	vector<bool> v(100);

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;

		if (!v[t - 1])
			v[t - 1] = true;
		else
			++cnt;
	}

	cout << cnt;
}