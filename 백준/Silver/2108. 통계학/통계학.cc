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

	int n, most = 0;
	double sum = 0;
	cin >> n;

	vector<int> v(n);
	vector<int> modes;
	map<int, int> m;

	for (int& i : v)
	{
		cin >> i;
		++m[i];
		sum += i;
	}

	sort(v.begin(), v.end());

	for (const auto& a : m)
		most = max(a.second, most);

	for (const auto& a : m)
		if (a.second == most)
			modes.push_back(a.first);

	sort(modes.begin(), modes.end());
	const int mode = (modes.size() > 1 ? modes[1] : modes[0]);

	cout << (round(sum / n) == -0 ? 0 : round(sum / n)) << '\n';
	cout << v[n / 2] << '\n';
	cout << mode << '\n';
	cout << v[n - 1] - v[0];
}