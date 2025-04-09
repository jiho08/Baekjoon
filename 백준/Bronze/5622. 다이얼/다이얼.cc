#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int c = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		switch (s[i])
		{
        case 'A':
        case 'B':
        case 'C':
            c += 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            c += 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            c += 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            c += 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            c += 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            c += 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            c += 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            c += 10;
            break;
		}
	}

    cout << c;
}