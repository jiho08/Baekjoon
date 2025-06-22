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
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m;
	cin >> m;

	array<pair<int, int>, 3> cups;

	for (int i = 1; i <= 3; ++i)
	{
		cups[i - 1].first = i;
		cups[i - 1].second = i;
	}

	while (m--)
	{
		int x, y;
		cin >> x >> y;

		if (x == y)
			continue;

		swap(cups[x - 1].second, cups[y - 1].second);
	}

	for (const auto a : cups)
		if (a.second == 1)
			cout << a.first;
}