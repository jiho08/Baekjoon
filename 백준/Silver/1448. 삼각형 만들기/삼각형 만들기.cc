#include <algorithm>
#include <iostream>
#include <vector>
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

	tuple<int, int, int> t = make_tuple(v[point - 3], v[point - 2], v[point - 1]);

	while (true)
	{
		if (get<0>(t) + get<1>(t) <= get<2>(t))
		{
			--point;

			if (point < 3)
			{
				answer = -1;
				break;
			}

			t = make_tuple(v[point - 3], v[point - 2], v[point - 1]);
			continue;
		}

		answer = get<0>(t) + get<1>(t) + get<2>(t);
		break;
	}

	cout << answer;
}