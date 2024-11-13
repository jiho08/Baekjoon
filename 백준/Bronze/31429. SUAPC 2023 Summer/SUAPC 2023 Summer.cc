#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string array[11] =
	{ "12 1600", "11 894", "11 1327", "10 1311", "9 1004",
		"9 1178", "9 1357", "8 837", "7 1055", "6 556", "6 773" };

	int n;
	cin >> n;
	cout << array[n - 1];
}