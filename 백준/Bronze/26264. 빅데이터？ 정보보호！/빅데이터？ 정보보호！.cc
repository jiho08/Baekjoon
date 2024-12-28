#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, security = 0, bigdata = 0;
	string s;
	cin >> n >> s;

	for (char i : s)
		if (i == 'b')
			++bigdata;
		else if (i == 's')
			++security;

	if (bigdata > security)
		cout << "bigdata?";
	else if (security > bigdata)
		cout << "security!";
	else
		cout << "bigdata? security!";
}