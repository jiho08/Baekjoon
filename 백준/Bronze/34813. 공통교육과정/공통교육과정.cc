#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	switch (s[0])
	{
	case 'F':
		cout << "Foundation";
		break;
	case 'C':
		cout << "Claves";
		break;
	case 'V':
		cout << "Veritas";
		break;
	case 'E':
		cout << "Exploration";
		break;
	}
}