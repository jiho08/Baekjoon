#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int s, r[9];
	cin >> s;

	for (int& i : r)
	{
		cin >> i;
		s -= i;
	}

	cout << s;
}