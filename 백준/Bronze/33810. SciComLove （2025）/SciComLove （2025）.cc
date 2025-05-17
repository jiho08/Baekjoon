#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int count = 0;
	const string t = "SciComLove";
	string s;
	cin >> s;

	for (int i = 0; i < 10; ++i)
		if (s[i] != t[i])
			++count;

	cout << count;
}