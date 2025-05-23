#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool b = false;
	int n;
	cin >> n;

	while (n > 1)
	{
		if (n % 2 != 0)
		{
			b = true;
			break;
		}

		n /= 2;
	}

	cout << (b ? 0 : 1);
}