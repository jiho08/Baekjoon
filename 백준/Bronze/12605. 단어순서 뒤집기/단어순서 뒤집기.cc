#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 1; i <= n; ++i)
	{
		stack<string> st;
		string s, t;

		getline(cin, s);

		for (const char c : s)
			if (c == ' ')
			{
				st.push(t);
				t.clear();
			}
			else
				t += c;

		st.push(t);

		cout << "Case #" << i << ": ";

		while (!st.empty())
		{
			cout << st.top() << ' ';
			st.pop();
		}

		cout << '\n';
	}
}