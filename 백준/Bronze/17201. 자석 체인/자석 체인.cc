#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	char prev = ' ';
	bool flag = false;

	for (const char c : s)
	{
		if (prev == c)
		{
			flag = true;
			break;
		}

		prev = c;
	}

	cout << (flag ? "No" : "Yes");
}