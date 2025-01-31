#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int a = 0;

	for (const char i : s)
		if (i == '_')
			++a;

	cout << a * 5 + s.size() + 2;
}