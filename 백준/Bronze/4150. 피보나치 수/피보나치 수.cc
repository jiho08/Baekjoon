#include <iostream>
#include <vector>

using namespace std;

string add(string a, string b)
{
	int sum = 0;
	string s;

	while (!a.empty() || !b.empty() || sum)
	{
		if (!a.empty())
		{
			sum += a.back() - '0';
			a.pop_back();
		}

		if (!b.empty())
		{
			sum += b.back() - '0';
			b.pop_back();
		}

		s.push_back((sum % 10) + '0');
		sum /= 10;
	}

	reverse(s.begin(), s.end());
	return s;
}


int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	string a = "0", b = "1", s = "1";

	for (int i = 1; i < n; ++i)
	{
		s = add(a, b);
		a = b;
		b = s;
	}

	cout << s;
}