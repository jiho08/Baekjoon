#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	long long r = 0, s = 0;

	while (n--)
	{
		int t;
		cin >> t;

		t == 1 ? ++r : --r;
		s += r;
	}

	cout << s;
}