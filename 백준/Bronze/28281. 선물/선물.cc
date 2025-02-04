#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x, s = 2000;
	cin >> n >> x;

	vector<int> a(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

    for (int i = 0; i < n - 1; ++i)
		s = std::min(a[i] + a[i + 1], s);

	cout << s * x;
}