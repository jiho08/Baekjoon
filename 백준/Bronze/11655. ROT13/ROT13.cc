#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			int num = s[i] + 13;

			if (num > 122)
				num = 97 + (num - 123);

			s[i] = char(num);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			int num = s[i] + 13;

			if (num > 90)
				num = 65 + (num - 91);

			s[i] = char(num);
		}
	}

	cout << s;
}