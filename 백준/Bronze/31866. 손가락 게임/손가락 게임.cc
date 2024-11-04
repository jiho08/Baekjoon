#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	bool x = false, y = false;
	int a, b;
	cin >> a >> b;

	if (a == 1 || a == 3 || a == 4)
		x = true;

	if (b == 1 || b == 3 || b == 4)
		y = true;

	if (a == b || x && y)
		cout << '=';
	else if (x)
		cout << '<';
	else if (y)
		cout << '>';
	else
		if (a == 0)
		{
			if (b == 2)
				cout << '>';
			else
				cout << '<';
		}
		else if (a == 2)
		{
			if (b == 0)
				cout << '<';
			else
				cout << '>';
		}
		else
		{
			if (b == 0)
				cout << '>';
			else
				cout << '<';
		}
}
