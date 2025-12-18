#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore();

	while (n--)
	{
		string s;
		getline(cin, s);

		cout << (char)toupper(s[0]);

		for (int i = 1; i < s.size(); ++i)
			cout << s[i];

		cout << '\n';
	}
}