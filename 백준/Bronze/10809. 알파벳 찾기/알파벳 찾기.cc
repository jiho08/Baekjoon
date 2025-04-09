#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int r[26];
	string s;
	cin >> s;

	fill(begin(r), end(r), -1);

	for (int i = 0; i < s.size(); ++i)
		if (r[s[i] - 'a'] == -1)
			r[s[i] - 'a'] = i;

	for (int i = 0; i < 26; ++i)
		cout << r[i] << ' ';
}