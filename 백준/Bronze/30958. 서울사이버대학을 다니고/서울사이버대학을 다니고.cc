#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int alphabet[26] = {};
	int n, max = 0;
	string song;

	cin >> n;
	cin.ignore();
	getline(cin, song);

	for (char c : song)
		if (c >= 'a' && c <= 'z')
			++alphabet[c - 'a'];

	for (int i : alphabet)
		if (max < i)
			max = i;

	cout << max;
}