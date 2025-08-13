#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, high = 0, low = 1001;
	cin >> n;

	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (const int i : v)
	{
		high = max(i, high);
		low = min(i, low);
	}

	if (v[0] == low)
		cout << "ez";
	else if (v[0] == high)
		cout << "hard";
	else
		cout << "?";
}