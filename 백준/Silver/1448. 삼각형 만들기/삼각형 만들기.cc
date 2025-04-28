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
#include <map>
#include <unordered_map>
#include <tuple>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, answer;
	cin >> n;

	vector<int> v(n);

	int point = n;

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	int t[3];

	while (true)
	{
		t[0] = v[point - 3];
		t[1] = v[point - 2];
		t[2] = v[point - 1];

		if (t[0] + t[1] <= t[2])
		{
			--point;

			if (point < 3)
			{
				answer = -1;
				break;
			}

			continue;
		}

		answer = t[0] + t[1] + t[2];
		break;
	}

	cout << answer;
}