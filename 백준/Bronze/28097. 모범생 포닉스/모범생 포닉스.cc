#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, d = 0, h = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		h += t;
	}

	h += (n - 1) * 8;

	if (h > 24)
	{
		d = h / 24;
		h %= 24;
	}

	cout << d << ' ' << h;
}