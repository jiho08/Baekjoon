#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool a = false, b = false, c = false;
	string r[3];
	cin >> r[0] >> r[1] >> r[2];

	for (auto& i : r)
		if (i[0] == 'l')
			a = true;

	for (auto& i : r)
		if (i[0] == 'k')
			b = true;

	for (auto& i : r)
		if (i[0] == 'p')
			c = true;

	cout << (a && b && c ? "GLOBAL" : "PONIX");
}