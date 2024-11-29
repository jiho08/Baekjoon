#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s[6];

	for (int i = 0; i < 6; ++i)
		getline(cin, s[i]);

	for (int i = 0; i < 6; ++i)
		s[i].erase(s[i].find_last_not_of(" ") + 1);

	cout << "Latitude " << s[0].size() << ':' << s[1].size() << ':' << s[2].size() << '\n'
		<< "Longitude " << s[3].size() << ':' << s[4].size() << ':' << s[5].size() << '\n';
}