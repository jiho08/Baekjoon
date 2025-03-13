#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> s;

	int n;
	cin >> n;

	while (n--)
	{
		string t;
		cin >> t;

		if (t == "push")
		{
			int i;
			cin >> i;

			s.push(i);
		}
		else if (t == "pop")
		{
			if (s.empty())
				cout << -1 << '\n';
			else
			{
				int i = s.top();
				s.pop();
				cout << i << '\n';
			}
		}
		else if (t == "size")
			cout << s.size() << '\n';
		else if (t == "empty")
			cout << (s.empty() ? 1 : 0) << '\n';
		else
			cout << (s.empty() ? -1 : s.top()) << '\n';
	}
}