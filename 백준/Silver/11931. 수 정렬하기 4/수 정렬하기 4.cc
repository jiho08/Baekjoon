#include <algorithm>
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

	sort(v.begin(), v.end(), [](const int a, const int b)
		{
			return a > b;
		});

	for (const int& i : v)
		cout << i << '\n';
}