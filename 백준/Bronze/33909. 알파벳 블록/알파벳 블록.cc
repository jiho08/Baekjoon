#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int s, c, o, n;
	cin >> s >> c >> o >> n;

	o += c / 2;
	n += s;

	cout << min(n / 3, o / 3);
}