#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	map<string, int> fir;
	map<int, string> sec;
	

	for (int i = 1; i <= n; ++i)
	{
		string s;
		cin >> s;

		fir[s] = i;
		sec[i] = s;
	}

	while (m--)
	{
		string s;
		cin >> s;

		(fir.find(s) == fir.end() ?
			cout << sec[stoi(s)] : cout << fir[s]) << '\n';
	}
}