#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	cout << v[n - 1] - v[0];
}