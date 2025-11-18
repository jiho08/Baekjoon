#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int cnt = 0;

	for (int i = 1; i <= 5; ++i)
	{
		string s;
		cin >> s;

		if (s.find("FBI") != string::npos)
		{
			++cnt;
			cout << i << '\n';
		}
	}

	if (cnt == 0)
		cout << "HE GOT AWAY!";
}