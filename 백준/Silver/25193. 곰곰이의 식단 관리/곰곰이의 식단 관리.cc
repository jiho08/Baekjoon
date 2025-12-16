#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	int cnt = 0;

	for (const char c : s)
		if (c == 'C')
			++cnt;

	const int t = n - cnt;

	if (cnt % (t + 1) != 0)
		cout << cnt / (t + 1) + 1;
	else
		cout << cnt / (t + 1);
}