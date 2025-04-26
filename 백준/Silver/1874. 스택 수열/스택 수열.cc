#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	int n, find = 0, i = 1;
	cin >> n;

	vector<int> v(n);
	stack<int> st;

	for (int& t : v)
		cin >> t;

	while (true)
	{
		if (v[find] > i)
		{
			st.push(i);
			s += "+\n";
			++i;
		}
		else if (v[find] < i)
		{
			const int temp = st.top();
			st.pop();

			if (v[find] != temp)
			{
				s = "NO";
				break;
			}

			s += "-\n";
			++find;

			if (find >= v.size())
				break;
		}
		else
		{
			s += "+\n-\n";
			++find;

			if (find >= v.size())
				break;

			++i;
		}
	}

	cout << s;
}