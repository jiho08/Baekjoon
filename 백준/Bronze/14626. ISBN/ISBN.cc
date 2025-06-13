#include <iostream>
#include <algorithm>
#include <cmath>
#include <list>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int r[13];

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			if (s[j] == '*')
				r[j] = i;
			else
				r[j] = s[j] - '0';
		}

		int q = 0;
		int m = 10;

		for (int j = 0; j < 12; ++j)
			if (j % 2 == 0)
				q += r[j] * 1;
			else
				q += r[j] * 3;

		q %= 10;
		m -= q;

		if (m == 10)
			m = 0;

		if (m == r[12])
		{
			cout << i;
			break;
		}
	}
}