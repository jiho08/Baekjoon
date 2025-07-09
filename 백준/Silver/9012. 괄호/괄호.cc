#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    
	int n;
	cin >> n;

	while (n--)
	{
		bool b = false;
		stack<int> st;
		string s;
		cin >> s;

		for (const auto& a : s)
			if (a == '(')
				st.push(1);
			else if (a == ')')
			{
				if (st.empty())
				{
					b = true;
					break;
				}

				st.pop();
			}

		cout << (st.empty() && !b ? "YES\n" : "NO\n");
	}
}