#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	getline(cin, s);

	while (s != "***")
	{
		for (int i = s.size() - 1; i >= 0; --i)
			cout << s[i];

		cout << '\n';
		getline(cin, s);
	}
}