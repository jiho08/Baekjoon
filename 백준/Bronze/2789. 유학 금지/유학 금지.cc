#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	set<char> r = { 'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E' };

	string s;
	cin >> s;

	for (char c : s)
		if (r.find(c) == r.end())
			cout << c;
}