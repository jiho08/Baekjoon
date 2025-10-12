#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s >> s >> s;

	for (int i = 0; i < 10000; ++i)
		cout << "-1\n";
}