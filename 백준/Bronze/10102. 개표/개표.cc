#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int v, a = 0, b = 0;
	string s;
	cin >> v >> s;

	for (const char c : s)
		++(c == 'A' ? a : b);

	if (a == b)
		cout << "Tie";
	else
		cout << (a > b ? 'A' : 'B');
}