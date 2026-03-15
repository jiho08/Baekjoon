#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	int cnt = 2 * (min(m, n) - 1);

	if (m > n)
		++cnt;

	cout << cnt;
}