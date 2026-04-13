#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int s[3] = {}, a[3] = {}, b[3] = {};
    int m = 0, x = 0, y = 0, d = -1;

	for (int i = 0; i < n; ++i)
	{
		int t[3];
		cin >> t[0] >> t[1] >> t[2];

		for (int j = 0; j < 3; ++j)
		{
			s[j] += t[j];

			if (t[j] == 3)
				++a[j];
			else if (t[j] == 2)
				++b[j];
		}
	}

	for (int i = 0; i < 3; ++i)
		if (m < s[i])
		{
			m = s[i];
			x = a[i];
			y = b[i];
			d = i;
		}
		else if (m == s[i])
		{
			if (x < a[i])
			{
				x = a[i];
				y = b[i];
				d = i;
			}
			else if (x == a[i])
			{
				if (y < b[i])
				{
					y = b[i];
					d = i;
				}
				else if (y == b[i])
					d = -1;
			}
		}

	if (d == -1)
		cout << "0 " << m;
	else
		cout << d + 1 << ' ' << m;
}