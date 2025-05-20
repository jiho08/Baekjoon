#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string a, b;

	while (cin >> a >> b)
	{
		int count = 0;

		for (int i = stoi(a); i <= stoi(b); ++i)
		{
			int r[10] = {};
			bool flag = false;

			for (int j = 0; j < to_string(i).size(); ++j)
				++r[to_string(i)[j] - '0'];

			for (const int t : r)
				if (t > 1)
				{
					flag = true;
					break;
				}

			if (!flag)
				++count;
		}

		cout << count << '\n';
	}
}