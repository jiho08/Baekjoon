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
		int a, b, c;
		cin >> a >> b >> c;

		if (a != -1 && b >= a && c >= b)
			++s;
		else if (a != -1 && b >= a && c == -1)
			++s;
		else if (a != -1 && b == -1 && c == -1)
			++s;
	}

	cout << s;
}