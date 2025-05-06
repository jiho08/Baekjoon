#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	map<string, string> site;

	while (n--)
	{
		string x, y;
		cin >> x >> y;
		site[x] = y;
	}

	while (m--)
	{
		string s;
		cin >> s;

		cout << site[s] << '\n';
	}
}