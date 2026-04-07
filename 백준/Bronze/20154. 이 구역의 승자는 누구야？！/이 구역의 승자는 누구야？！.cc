#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	const int al[26] = { 3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1 };

	int cnt = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size() - 1; i += 2)
	{
		const int t = (al[s[i] - 'A'] + al[s[i + 1] - 'A']) % 10;
		cnt = (cnt + t) % 10;
	}

	if (s.size() % 2 == 1)
		cnt = (cnt + al[s[s.size() - 1] - 'A']) % 10;

	cout << (cnt % 2 == 0 ? "You're the winner?" : "I'm a winner!");
}