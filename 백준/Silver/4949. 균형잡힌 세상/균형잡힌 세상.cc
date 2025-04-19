#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	getline(cin, s);

	while (s != ".")
	{
		stack<char> st;
		bool b = false;

		for (char c : s)
		{
			if (c == '(' || c == '[')
			{
				st.push(c);
				continue;
			}

			if (c == ')')
			{
				if (st.empty())
				{
					b = true;
					break;
				}

				const char t = st.top();
				st.pop();

				if (t != '(')
				{
					b = true;
					break;
				}
			}
			else if (c == ']')
			{
				if (st.empty())
				{
					b = true;
					break;
				}

				const char t = st.top();
				st.pop();

				if (t != '[')
				{
					b = true;
					break;
				}
			}
		}

		if (!st.empty())
			b = true;

		cout << (b ? "no\n" : "yes\n");

		getline(cin, s);
	}
}