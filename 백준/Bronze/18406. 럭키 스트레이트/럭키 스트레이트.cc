#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 0, b = 0;
	string s;

	cin >> s;

	for (int i = 0; i < s.size() / 2; ++i)
		a += s[i] - '0';

	for (int i = s.size() / 2; i < s.size(); ++i)
		b += s[i] - '0';

	cout << (a == b ? "LUCKY" : "READY");
}