#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		int a = 0, b = 0;

		for (int j = 0; j < 6; ++j)
		{
			int m;
			cin >> m;

			switch (j)
			{
			case 0:
				a += m;
				break;
			case 1:
				a += m * 2;
				break;
			case 2:
				a += m * 3;
				break;
			case 3:
				a += m * 3;
				break;
			case 4:
				a += m * 4;
				break;
			case 5:
				a += m * 10;
				break;
			}
		}

		for (int j = 0; j < 7; ++j)
		{
			int m;
			cin >> m;

			switch (j)
			{
			case 0:
				b += m;
				break;
			case 1:
				b += m * 2;
				break;
			case 2:
				b += m * 2;
				break;
			case 3:
				b += m * 2;
				break;
			case 4:
				b += m * 3;
				break;
			case 5:
				b += m * 5;
				break;
			case 6:
				b += m * 10;
				break;
			}
		}

		if (a > b)
			cout << "Battle " << i << ": Good triumphs over Evil\n";
		else if (b > a)
			cout << "Battle " << i << ": Evil eradicates all trace of Good\n";
		else
			cout << "Battle " << i << ": No victor on this battle field\n";
	}
}