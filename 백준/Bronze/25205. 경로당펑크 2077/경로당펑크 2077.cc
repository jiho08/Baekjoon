#include <iostream>
#include <string>

using namespace std;

char arr[14] = { 'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v' };

bool isOne(char c)
{
	for (char i : arr)
		if (c == i)
			return true;

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	cout << (isOne(s[n - 1]) ? 1 : 0);
}