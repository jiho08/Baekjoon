#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	while (n--)
	{
		int r[4], t;
		cin >> r[0] >> r[1] >> r[2] >> r[3];

		sort(r, r + 4);

		if (r[0] == r[1] && r[1] == r[2] && r[2] == r[3])
			t = 50000 + r[0] * 5000;
		else if ((r[0] == r[1] && r[1] == r[2]) || (r[1] == r[2] && r[2] == r[3]))
			t = 10000 + r[1] * 1000;
		else if (r[0] == r[1] && r[2] == r[3])
			t = 2000 + r[0] * 500 + r[2] * 500;
		else if (r[0] == r[1] || r[1] == r[2] || r[2] == r[3])
		{
			int q = r[0];

			for (int i = 1; i < 4; ++i)
			{
				if (r[i] == q)
					break;

				q = r[i];
			}

			t = 1000 + q * 100;
		}
		else
			t = r[3] * 100;

		s = max(s, t);
	}

	cout << s;
}