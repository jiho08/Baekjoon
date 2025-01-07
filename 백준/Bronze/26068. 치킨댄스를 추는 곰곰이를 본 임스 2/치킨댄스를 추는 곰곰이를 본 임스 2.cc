#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		const int t = stoi(s.substr(2, s.size() - 2));

		if (t > 90)
			continue;

		++count;
	}

	cout << count;
}