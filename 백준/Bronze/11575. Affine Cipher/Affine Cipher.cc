#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int a, b;
		string s;
		cin >> a >> b >> s;

		for (const char c : s)
			cout << static_cast<char>((a * (c - 65) + b) % 26 + 65);

		cout << '\n';
	}
}