#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	if (s.size() < 5)
		cout << "not cute";
	else
	{
		int size = s.size();

		if (s[--size] == 'p' && s[--size] == 'i' &&
            s[--size] == 'i' && s[--size] == 'r' && s[--size] == 'd')
			cout << "cute";
		else
			cout << "not cute";
	}
}