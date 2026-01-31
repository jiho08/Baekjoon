#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string ans;
	vector<string> v(n);

	for (string& s : v)
		cin >> s;

	for (int i = 0; i < v[0].size(); ++i)
	{
		int a = 1, b = 0;
		const char c = v[0][i];

		for (int j = 1; j < n; ++j)
			++(v[j][i] == c ? a : b);

		ans += (b == 0 ? c : '?');
	}

	cout << ans;
}