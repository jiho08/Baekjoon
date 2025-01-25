#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	int n, a = 0;
	cin >> s >> n;

	for (int i = 0; i < n; ++i)
	{
		string t;
		cin >> t;

		if (s == t)
			++a;
	}

	cout << a;
}