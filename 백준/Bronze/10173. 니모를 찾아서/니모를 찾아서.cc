#include <algorithm>
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

	while (s != "EOI")
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);

		if (s.find("nemo") != string::npos)
			cout << "Found\n";
		else
			cout << "Missing\n";

		getline(cin, s);
	}
}