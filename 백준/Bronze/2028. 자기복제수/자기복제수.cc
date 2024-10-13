#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string a = to_string(n);
		string b = to_string(n * n);

		if (b.find(a) == b.size() - a.size())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}