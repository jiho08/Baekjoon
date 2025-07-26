#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int x, sum = 0;
	cin >> x;

	vector<int> sticks;
	sticks.push_back(64);
	sum += 64;

	while (sum >= x)
	{
		if (sum == x)
			break;

		sort(sticks.begin(), sticks.end());

		if (sum - (sticks[0] >> 1) >= x)
		{
			sum -= sticks[0] >> 1;
			sticks[0] = sticks[0] >> 1;
		}
		else
		{
			sticks.push_back(sticks[0] >> 1);
			sticks[0] = sticks[0] >> 1;
		}
	}

	cout << sticks.size();
}