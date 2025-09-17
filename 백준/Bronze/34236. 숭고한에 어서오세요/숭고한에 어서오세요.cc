#include <iostream>
#include <vector>

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

	const int d = v[1] - v[0];

	cout << v[n - 1] + d;
}