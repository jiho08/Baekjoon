#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int white = 0, black = 0;

	for (int i = 0; i < 8; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < 8; ++j)
			switch (s[j])
			{
				case 'P':
					white += 1;
					break;
				case 'p':
					black += 1;
					break;
				case 'N':
				case 'B':
					white += 3;
					break;
				case 'n':
				case 'b':
					black += 3;
					break;
				case 'R':
					white += 5;
					break;
				case 'r':
					black += 5;
					break;
				case 'Q':
					white += 9;
					break;
				case 'q':
					black += 9;
					break;
			}
	}
		cout << white - black;
}