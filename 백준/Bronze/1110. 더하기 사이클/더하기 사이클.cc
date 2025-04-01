#include <algorithm>
#include <iostream>
#include <cmath>
#include <list>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <sstream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, r = -1, c = 0;
	cin >> n;

	while (r != n)
	{

		if (c == 0)
			r = n;

		int f;

		if (r < 10)
			f = r;
		else
			f = r / 10 + r % 10;

		r = r % 10 * 10 + f % 10;
		++c;
	}

	cout << c;
}