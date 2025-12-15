#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n, aCnt = 0, bCnt = 0;
		cin >> n;

		while (n--)
		{
			char a, b;
			cin >> a >> b;

			if (a == 'R')
			{
				if (b == 'S')
					++aCnt;
				else if (b == 'P')
					++bCnt;
			}
			else if (a == 'S')
			{
				if (b == 'R')
					++bCnt;
				else if (b == 'P')
					++aCnt;
			}
			else if (a == 'P')
			{
				if (b == 'R')
					++aCnt;
				else if (b == 'S')
					++bCnt;
			}
		}

		if (aCnt > bCnt)
			cout << "Player 1\n";
		else if (aCnt < bCnt)
			cout << "Player 2\n";
		else
			cout << "TIE\n";
	}
}