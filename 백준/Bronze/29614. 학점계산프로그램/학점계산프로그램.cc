#include <iostream>
#include <string>

using namespace std;

int main()
{
	float c = 0;
	int q = 0;

	string s;
	cin >> s;

	char r[s.size()] = {};

	for (int i = 0; i < s.size(); ++i)
		r[i] = s[i];

	for (char t : r)
		if (t == '+')
			c += 0.5f;
		else if (t >= 'A' && t < 'F')
		{
			c += 69 - t;
			++q;
		}
		else if (t == 'F')
		{
			c += 0;
			++q;
		}

		cout << c / q;
}