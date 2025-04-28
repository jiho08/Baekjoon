#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, count = 0;
	cin >> n >> m;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	int left = 0, right = n - 1;

	while (left < right)
	{
		const int sum = v[left] + v[right];

		if (sum < m)
			++left;
		else if (sum > m)
			--right;
		else if (sum == m)
		{
			++count;
			++left;
			--right;
		}
	}

	cout << count;
}