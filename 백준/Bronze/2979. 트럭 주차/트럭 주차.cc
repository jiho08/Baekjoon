#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int r[100] = {};
	int a, b, c;
	int x, y, s = 0;

	cin >> a >> b >> c;

	for (int i = 0; i < 3; ++i)
	{
		cin >> x >> y;

		for (int j = x; j < y; ++j)
			r[j] += 1;
	}

	for (int i = 0; i < 100; ++i)
	{
		switch (r[i])
		{
		    case 1:
				s += a;
				break;

			case 2:
				s += b * 2;
				break;

			case 3:
				s += c * 3;
				break;
		}
	}

	cout << s;

	return 0;
}