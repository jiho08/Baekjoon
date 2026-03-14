#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s, k, t;
	cin >> s >> k;

	for (const char c : s)
		if (c < '0' || c > '9')
			t += c;

	cout << (t.find(k) != string::npos ? 1 : 0);
}