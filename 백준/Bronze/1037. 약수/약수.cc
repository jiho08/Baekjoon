#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	cout << v[0] * v[n - 1];
}