#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s = 666, c = 0;
	cin >> n;

	while (true)
	{
		if (to_string(s).find("666") != string::npos)
			++c;

		if (n == c)
			break;

		++s;
	}

	cout << s;
}