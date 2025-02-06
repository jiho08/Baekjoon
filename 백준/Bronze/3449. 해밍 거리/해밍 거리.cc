#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int s = 0;
		string a, b;
		cin >> a >> b;

		for (int i = 0; i < a.size(); ++i)
			if (a[i] != b[i])
				++s;

		cout << "Hamming distance is " << s << ".\n";
	}
}