#include <iostream>
#include <string>
#include <sstream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	deque<int> d;
	string p, s, temp;
	int t, n;

	cin >> t;

	while (t--)
	{
		bool isError = false, isReversed = false;
		d.clear();

		cin >> p >> n >> s;

		s = s.substr(1, s.size() - 2);
		stringstream ss(s);

		while (getline(ss, temp, ','))
			d.push_back(stoi(temp));

		for (const char& i : p)
			if (i == 'R')
				isReversed = !isReversed;
			else if (i == 'D')
			{
				if (d.empty())
				{
					cout << "error\n";
					isError = true;
					break;
				}

				isReversed ? d.pop_back() : d.pop_front();
			}

		if (isError)
			continue;

		cout << '[';

		if (isReversed)
			for (auto i = d.rbegin(); i != d.rend(); ++i)
			{
				cout << *i;

				if (i + 1 != d.rend())
					cout << ',';
			}
		else
			for (auto i = d.begin(); i != d.end(); ++i)
			{
				cout << *i;

				if (i + 1 != d.end())
					cout << ',';
			}

		cout << "]\n";
	}
}