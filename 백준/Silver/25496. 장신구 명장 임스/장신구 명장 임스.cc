#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int p, n, cnt = 0;
	cin >> p >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	for (const int i : v)
		if (p < 200)
		{
			++cnt;
			p += i;
		}

	cout << cnt;
}