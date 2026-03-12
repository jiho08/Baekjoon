#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, s = 0;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; ++i)
		s += v[i];

	cout << s;
}