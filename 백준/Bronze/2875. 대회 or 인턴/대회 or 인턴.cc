#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;
	cout << min({ n / 2, m, (n + m - k) / 3 });
}