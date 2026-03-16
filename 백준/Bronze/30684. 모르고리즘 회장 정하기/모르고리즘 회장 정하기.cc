#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> v;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		if (s.size() == 3)
			v.push_back(s);
	}

	sort(v.begin(), v.end());

	cout << v[0];
}