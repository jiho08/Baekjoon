#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	while (s != "end")
	{
		if (s == "animal")
			cout << "Panthera tigris\n";
		else if (s == "tree")
			cout << "Pinus densiflora\n";
		else if (s == "flower")
			cout << "Forsythia koreana\n";

		cin >> s;
	}
}