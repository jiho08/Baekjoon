#include <algorithm>
#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	deque<int> d(n);

	for (int& i : d)
		cin >> i;

	sort(d.begin(), d.end());

	int excludeNum = static_cast<int>(round(d.size() * 0.15));

	while (excludeNum--)
	{
		d.pop_front();
		d.pop_back();
	}

	for (const int i : d)
		sum += i;

	cout << round(static_cast<double>(sum) / d.size());
}