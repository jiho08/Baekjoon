#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s = "WelcomeToSMUPC";
	int n;
	cin >> n;
	cout << s[(n - 1) % 14];
}