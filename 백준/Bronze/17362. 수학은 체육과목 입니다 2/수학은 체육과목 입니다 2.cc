#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n,c = 0;
	bool b = true;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		if (b)
		{
			++c;

			if (c == 5)
				b = false;
		}
		else
		{
			--c;

			if (c == 1)
				b = true;
		}
	}

	cout << c;
}