#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int s1, s2;
	cin >> s1 >> s2;

	bool a = false, b = false;

	while (s1--)
	{
		int x, y;
		cin >> x >> y;

		if (x != y)
			a = true;
	}

	while (s2--)
	{
		int x, y;
		cin >> x >> y;

		if (x != y)
			b = true;
	}

	if (a == true)
		cout << "Wrong Answer";
	else if (b == true)
		cout << "Why Wrong!!!";
	else
		cout << "Accepted";
}