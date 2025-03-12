#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	queue<int> q;
	int n;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		if (s == "push")
		{
			int t;
			cin >> t;
			q.push(t);
		}
		else if (s == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (s == "size")
			cout << q.size() << '\n';
		else if (s == "empty")
			cout << (q.empty() ? 1 : 0) << '\n';
		else if (s == "front")
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		else if (s == "back")
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
	}
}