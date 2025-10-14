#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int k;
	cin >> k;

	for (int i = 1; i <= k; ++i)
	{
		int h;
		string s;
		cin >> h >> s;

		for (const char c : s)
			if (c == 'c')
				++h;
			else if (c == 'b')
				--h;

		cout << "Data Set " << i << ":\n" << h << "\n\n";
	}
}