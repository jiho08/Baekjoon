#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		if (s.size() > 10)
			continue;

		bool isNum = true;
		int bigCnt = 0, smallCnt = 0;

		for (const char c : s)
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				isNum = false;

				if (c >= 'A' && c <= 'Z')
					++bigCnt;
				else
					++smallCnt;
			}
			else if (!(c >= '0' && c <= '9'))
				isNum = false;

		if (isNum || bigCnt > smallCnt)
			continue;

		cout << s;
	}
}