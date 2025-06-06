#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	int a[5] = {};

	for (const char c : s)
		switch (c)
		{
		case 'u':
			++a[0];
			break;
		case 'o':
			++a[1];
			break;
		case 's':
			++a[2];
			break;
		case 'p':
			++a[3];
			break;
		case 'c':
			++a[4];
			break;
		}

	sort(a, a + 5);

	cout << a[0];
}