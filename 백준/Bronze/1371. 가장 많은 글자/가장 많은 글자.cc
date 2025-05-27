#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r[26] = {}, m = 0;
	string s;

	while (getline(cin, s))
		for (const auto& a : s)
			if (a != ' ')
				++r[a - 'a'];

	for (const int i : r)
		m = max(m, i);

	for (int i = 0; i < 26; ++i)
		if (r[i] == m)
			cout << static_cast<char>('a' + i);
}