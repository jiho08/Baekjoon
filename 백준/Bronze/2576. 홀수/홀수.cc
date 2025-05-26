#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r[7], sum = 0, min_num = 100;

	for (int& i : r)
		cin >> i;

	for (const int i : r)
		if (i % 2 != 0)
		{
			sum += i;

			min_num = min(i, min_num);
		}

	sum == 0 ? cout << -1 : cout << sum << '\n' << min_num;
}
