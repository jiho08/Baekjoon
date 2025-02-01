#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 0;
	cin >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;
		s += b % a;
	}

	cout << s;
}