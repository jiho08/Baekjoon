#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	pair<string, int> p = {"", 0};
	int n;
	cin >> n;

	map<string, int> m;

	while (n--)
	{
		string s;
		cin >> s;
		++m[s];
	}

	for (const auto a : m)
		if (p.second < a.second)
			p = a;

	cout << p.first;
}