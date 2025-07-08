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

	bool b = false;

	stack<int> s;
	vector<int> v(n);

	for (int& i : v)
		cin >> i;

	for (int i = 0; i < n; ++i)
		if (v[i] == count)
			++count;
		else if (!s.empty() && s.top() == count)
		{
			++count;
			s.pop();
			--i;
		}
		else
			s.push(v[i]);

	while (!s.empty())
	{
		const int t = s.top();

		if (t == count)
		{
			++count;
			s.pop();
		}
		else
		{
			b = true;
			break;
		}
	}

	cout << (b ? "Sad" : "Nice");
}