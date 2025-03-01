#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string a, b;
	cin >> a >> b;

	int i = a.size() - 1, j = b.size() - 1, c = 0;
	string r;

	r.reserve(max(a.size(), b.size()) + 1);

	while (i >= 0 || j >= 0 || c)
	{
		int s = c;

		if (i >= 0)
			s += a[i--] - '0';

		if (j >= 0)
			s += b[j--] - '0';

		r.push_back(static_cast<char>(s % 10 + '0'));
		c = s / 10;
	}

	reverse(r.begin(), r.end());

	cout << r;
}