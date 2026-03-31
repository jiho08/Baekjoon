#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, l, h;
	cin >> n >> l >> h;

	double sum = 0;
	deque<int> dq;

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		dq.push_back(t);
	}

	sort(dq.begin(), dq.end());

	for (int i = 0; i < l; ++i)
		dq.pop_front();

	for (int i = 0; i < h; ++i)
		dq.pop_back();

	while (!dq.empty())
	{
		sum += dq.front();
		dq.pop_front();
	}

	cout << fixed;
	cout.precision(10);
	cout << sum / (n - l - h);
}