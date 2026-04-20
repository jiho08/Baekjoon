#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	vector<int> v;
	const int m = min(a, b);

	for (int i = 1; i <= m; ++i)
		if (a % i == 0 && b % i == 0)
			v.push_back(i);

	for (const int i : v)
		cout << i << ' ' << a / i << ' ' << b / i << '\n';
}