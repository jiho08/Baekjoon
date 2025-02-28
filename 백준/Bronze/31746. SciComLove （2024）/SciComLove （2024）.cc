#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s = "SciComLove";
	int n;
	cin >> n;

	if (n % 2 == 1)
		reverse(s.begin(), s.end());

	cout << s;
}