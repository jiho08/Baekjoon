#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> v(3);
	string s;

	for (int& i : v)
		cin >> i;

	sort(v.begin(), v.end());
	cin >> s;

	for (const char c : s)
		if (c == 'A')
			cout << v[0] << ' ';
		else if (c == 'B')
			cout << v[1] << ' ';
		else
			cout << v[2] << ' ';
}