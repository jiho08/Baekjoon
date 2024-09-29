#include <iostream>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	int l = a.length();

	for (int i = 0; i < l; ++i)
	{
		if (a[i] == '1' && b[i] == '1')
			cout << '1';
		else
			cout << '0';
	}

	cout << '\n';

	for (int i = 0; i < l; ++i)
	{
		if (a[i] == '1' || b[i] == '1')
			cout << '1';
		else
			cout << '0';
	}

	cout << '\n';

	for (int i = 0; i < l; ++i)
	{
		if (a[i] == b[i])
			cout << '0';
		else
			cout << '1';
	}

	cout << '\n';

	for (int i = 0; i < l; ++i)
	{
		if (a[i] == '1')
			cout << '0';
		else
			cout << '1';
	}

	cout << '\n';

	for (int i = 0; i < l; ++i)
	{
		if (b[i] == '1')
			cout << '0';
		else
			cout << '1';
	}
}