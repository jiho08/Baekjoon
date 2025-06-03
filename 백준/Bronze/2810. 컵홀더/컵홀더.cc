#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	float cup = 1;

	for (const char& c : s)
		if (c == 'S')
			++cup;
		else if (c == 'L')
			cup += 0.5f;

	cout << (cup > n ? n : cup);
}