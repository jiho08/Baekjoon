#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long s, n = 0, i;
	cin >> s;

	for (i = 1; n <= s; ++i)
	{
		n += i;

		if (n > s)
		{
			--i;
			break;
		}
	}

	cout << i;
}