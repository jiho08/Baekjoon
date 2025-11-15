#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		int s = 0;
		string n, r;
		getline(cin, n);

		for (const char c : n)
			if (c == ' ')
			{
				s += stoi(r);
				r = "";
			}
			else
				r += c;

		s += stoi(r);
		cout << s << '\n';
	}
}