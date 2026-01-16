#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, m = -1;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (int i : v)
		m = max(m, i);

	cout << m;
}