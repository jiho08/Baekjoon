#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;

	if (a == b || (a == 1 || a == 3 || a == 4) && (b == 1 || b == 3 || b == 4))
		cout << '=';
	else if (a == 1 || a == 3 || a == 4)
		cout << '<';
	else if (b == 1 || b == 3 || b == 4)
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