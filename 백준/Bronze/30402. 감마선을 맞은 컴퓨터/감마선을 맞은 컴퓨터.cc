#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	for (int i = 0; i < 225; ++i)
	{
		char c;
		cin >> c;

		if (c == 'w')
		{
			cout << "chunbae";
			break;
		}

		if (c == 'b')
		{
			cout << "nabi";
			break;
		}

		if (c == 'g')
		{
			cout << "yeongcheol";
			break;
		}
	}
}