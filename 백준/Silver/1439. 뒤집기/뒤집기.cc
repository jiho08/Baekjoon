#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int zc = 0, oc = 0;

	for (int i = 0; i < s.size(); ++i)
		if (s[i] != s[i + 1])
			s[i] == '0' ? ++zc : ++oc;

	cout << (zc > oc ? oc : zc);
}