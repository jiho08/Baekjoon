#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int x = 0, y = 0;
		string s;
		cin >> s;

		bool b = true;

		stack<char> k;

		for (char i : s)
		{
			if (i == '(')
			{
				k.push(i);
				++x;
			}
			else
			{
				if (k.empty())
				{
					b = false;
					break;
				}

				k.pop();
				++y;
			}
		}

		cout << (b && x == y ? "YES\n" : "NO\n");
	}
}