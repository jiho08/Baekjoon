#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int result = 0;
	string num;
	bool isPlus = true;

	for (int i = 0; i <= s.size(); ++i)
		if (i == s.size() || s[i] == '+' || s[i] == '-')
		{
			if (!num.empty())
			{
				const int n = stoi(num);
				isPlus ? result += n : result -= n;
				num.clear();
			}

			if (i < s.size() && s[i] == '-')
				isPlus = false;
		}
		else
			num.push_back(s[i]);

	cout << result;
}