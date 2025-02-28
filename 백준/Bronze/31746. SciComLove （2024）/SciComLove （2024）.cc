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

	for (int i = 0; i < n; ++i)
		reverse(s.begin(), s.end());

	cout << s;
}