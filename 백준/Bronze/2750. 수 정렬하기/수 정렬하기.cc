#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> r(n);

	for (int i = 0; i < n; ++i)
		cin >> r[i];

	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < n - 1 - i; ++j)
			if (r[j] > r[j + 1])
				swap(r[j], r[j + 1]);

	for (int i = 0; i < n; ++i)
		cout << r[i] << '\n';
}