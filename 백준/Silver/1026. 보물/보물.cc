#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	vector<int> a(n), b(n);

	for (int& i : a)
		cin >> i;

	for (int& i : b)
		cin >> i;

	sort(a.begin(), a.end(), [](int x, int y)
		{
			return x > y;
		});

	sort(b.begin(), b.end());

	for (int i = 0; i < n; ++i)
		s += a[i] * b[i];

	cout << s;
}