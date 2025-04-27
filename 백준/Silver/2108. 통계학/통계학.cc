#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool flag = false;
	int n, max = 0;
	double sum = 0;
	cin >> n;

	vector<int> v(n);
	map<int, int> m;
	pair<int, int> p = { 0, 0 };

	for (int& i : v)
	{
		cin >> i;

		if (m.count(i))
			++m[i];
		else
			m[i] = 1;
	}

	sort(v.begin(), v.end());

	for (const int i : v)
		sum += i;

	for (const auto& a : m)
		max = std::max(a.second, max);

	for (int i : v)
	{
		if (m[i] > p.second)
		{
			p.first = i;
			p.second = m[i];
		}
		else if (m[i] == max && i != p.first && !flag)
		{
			p.first = i;
			p.second = m[i];
			flag = true;
		}
	}

	cout << (round(sum / n) == -0 ? 0 : round(sum / n)) << '\n';
	cout << v[n / 2] << '\n';
	cout << p.first << '\n';
	cout << v[n - 1] - v[0];
}