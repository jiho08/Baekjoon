#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	string a, b;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		a += s;
	}

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		b += s;
	}

	cout << (stoll(a) > stoll(b) ? b : a);
}