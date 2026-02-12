#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int cnt = 0;

	for (const char c : s)
	{
		cout << c;
		++cnt;

		if (cnt == 10)
		{
			cnt = 0;
			cout << '\n';
		}
	}
}