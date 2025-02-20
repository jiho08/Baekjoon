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

	long long r = 0, s = 0;

	vector<int> v;

	while (n--)
	{
		int t;
		cin >> t;

		t == 1 ? ++r : --r;

		v.push_back(r);
	}

	for (int i : v)
		s += i;

	cout << s;
}