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

	int a = 0, b = 0;

	for (const char c : s)
		if (c == '2')
			++a;
		else if (c == 'e')
			++b;

	if (a == b)
		cout << "yee";
	else
		cout << (a > b ? '2' : 'e');
}