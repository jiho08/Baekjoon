#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int n, c = 0;
	cin >> s >> n;

	for (int i = 0; i < n; ++i)
	{
		string t;
		cin >> t;

		if (s.substr(0, 5) == t.substr(0, 5))
			++c;
	}

	cout << c;
}