#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_map<string, string> site;
	string x, y;

	while (n--)
	{
		cin >> x >> y;
		site[x] = y;
	}

	while (m--)
	{
		cin >> x;
		cout << site[x] << '\n';
	}
}