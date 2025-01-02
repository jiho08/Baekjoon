#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); ++j)
			if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == 'O' && s[j + 1] == 'I'))
			{
				++sum;
				break;
			}
	}

	cout << sum;
}