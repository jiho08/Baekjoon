#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int t;
		string s;
		cin >> t >> s;
		cout << s.erase(t - 1, 1) << '\n';
	}
}