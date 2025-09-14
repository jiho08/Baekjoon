#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string a, b;
	cin >> a >> b;

	long long x = 0, y = 0;

	for (const char c : a)
		x += (c - '0');

	for (const char c : b)
		y += (c - '0');

	cout << x * y;
}