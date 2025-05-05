#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k, count = 0;
	cin >> n >> k;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (int i = n - 1; i >= 0; --i)
		if (k / v[i] > 0)
		{
			count += k / v[i];
			k %= v[i];
		}

	cout << count;
}