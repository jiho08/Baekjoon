#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string name;
	getline(cin, name);

	const auto s = name.find('(');

	if (s != string::npos)
	{
		cout << name.substr(0, s - 1) << '\n';
		cout << name.substr(s + 1, name.size() - s - 2);
	}
	else
		cout << name << "\n-";
}