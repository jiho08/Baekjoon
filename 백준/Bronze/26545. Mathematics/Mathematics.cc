#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;

		s += t;
	}

	cout << s;
}