#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int ans = 1, cnt = 1;

	for (int i = 1; i < s.size(); ++i)
		if (s[i] > s[i - 1])
			ans += ++cnt;
		else
			ans += cnt = 1;

	cout << ans;
}