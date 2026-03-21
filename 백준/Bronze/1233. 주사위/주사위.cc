#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c, m = 0, ans = 0;
	cin >> a >> b >> c;

	vector<int> v(81);

	for (int i = 1; i <= a; ++i)
		for (int j = 1; j <= b; ++j)
			for (int k = 1; k <= c; ++k)
				++v[i + j + k];

	for (int i = 0; i < v.size(); ++i)
		if (m < v[i])
		{
			m = v[i];
			ans = i;
		}

	cout << ans;
}