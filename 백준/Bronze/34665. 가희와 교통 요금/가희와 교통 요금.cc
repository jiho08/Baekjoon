#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	if (a != b)
		cout << 1550;
	else if (a == b)
		cout << 0;
}