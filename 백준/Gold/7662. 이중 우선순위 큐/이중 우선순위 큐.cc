#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		char command;
		int value;
		multiset<int> q;

		while (k--)
		{
			cin >> command >> value;

			if (command == 'I')
				q.insert(value);
			else if (!q.empty())
				if (value == 1)
					q.erase(--q.end());
				else
					q.erase(q.begin());
		}

		if (q.empty())
			cout << "EMPTY\n";
		else
			cout << *(--q.end()) << ' ' << *q.begin() << '\n';
	}
}