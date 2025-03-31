#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, c = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		if (s[0] == 'C')
			++c;
	}

	cout << c;
}