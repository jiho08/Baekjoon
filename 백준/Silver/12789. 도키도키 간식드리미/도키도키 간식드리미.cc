#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, count = 1;
	cin >> n;

	stack<int> s;
	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (int i = 0; i < n; ++i)
	{
		while (!s.empty() && s.top() == count)
		{
			s.pop();
			++count;
		}

		if (v[i] == count)
			++count;
		else
			s.push(v[i]);
	}

	while (!s.empty() && s.top() == count)
	{
		s.pop();
		++count;
	}

	cout << (s.empty() ? "Nice" : "Sad");
}