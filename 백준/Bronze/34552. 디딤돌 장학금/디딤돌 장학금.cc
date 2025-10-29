#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> m(11);

	for (int& i : m)
		cin >> i;

	int n, ans = 0;
	cin >> n;

	while (n--)
	{
		int b, s;
		float l;
		cin >> b >> l >> s;

		if (s >= 17 && l >= 2.0)
			ans += m[b];
	}

	cout << ans;
}