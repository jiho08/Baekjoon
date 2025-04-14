#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool flag = false;
	string s;
	cin >> s;

	vector<int> v(s.size());

	for (int i = 0; i < s.size(); ++i)
		v[i] = s[i] - '0';

	int d = v[0] - v[1];

	for (int i = 0; i < s.size() - 1; ++i)
		if (v[i] - v[i + 1] != d)
			flag = true;

	cout << (flag ? "흥칫뿡!! <(￣ ﹌ ￣)>" : "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
}