#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string a, b;
	char c;
	cin >> a >> c >> b;

	if (c == '+')
	{
		if (a.size() < b.size())
			a = string(b.size() - a.size(), '0') + a;
		else if (b.size() < a.size())
			b = string(a.size() - b.size(), '0') + b;

		string ans;
		int carry = 0;

		for (int i = a.size() - 1; i >= 0; --i)
		{
			const int da = a[i] - '0';
			const int db = b[i] - '0';
			const int sum = da + db + carry;
          
			ans = static_cast<char>((sum % 10) + '0') + ans;
			carry = sum / 10;
		}

		if (carry > 0)
			ans = '1' + ans;

		cout << ans;
	}
	else
	{
		const int t = (a.size() - 1) + (b.size() - 1);
		cout << '1';

		for (int i = 0; i < t; ++i)
			cout << '0';
	}
}