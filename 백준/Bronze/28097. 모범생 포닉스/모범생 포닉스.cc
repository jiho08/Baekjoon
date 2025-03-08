#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, d = 0;
	cin >> n;

	int h = (n - 1) * 8;

	while (n--)
	{
		int t;
		cin >> t;
		h += t;
	}


	if (h > 24)
	{
		d = h / 24;
		h %= 24;
	}

	cout << d << ' ' << h;
}