#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> trees(n);

	for (int& i : trees)
		cin >> i;

	sort(trees.begin(), trees.end());

	long long min = 1, max = trees[n - 1], result = 0;

	while (min <= max)
	{
		long long const height = (min + max) / 2;
		long long sum = 0;

		for (const int i : trees)
			if (i > height)
				sum += i - height;

		if (sum >= m)
		{
			result = height;
			min = height + 1;
		}
		else
			max = height - 1;
	}

	cout << result;
}