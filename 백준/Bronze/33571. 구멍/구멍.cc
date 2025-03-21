#include <algorithm>
#include <iostream>
#include <cmath>
#include <list>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	string s;
	getline(cin, s);

	for (char i : s)
	{
		switch (i)
		{
			case 'a':
			case 'A':
			case 'b':
			case 'd':
			case 'D':
			case 'e':
			case 'g':
			case 'o':
			case 'O':
			case 'p':
			case 'P':
			case 'q':
			case 'Q':
			case 'R':
			case '@':
				++n;
				break;

			case 'B':
				n += 2;
				break;

			default:
				break;
		}
	}

	cout << n;
}