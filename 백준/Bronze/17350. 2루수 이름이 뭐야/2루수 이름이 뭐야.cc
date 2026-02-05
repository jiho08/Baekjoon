#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	bool flag = false;

	while (n--)
	{
		string s;
		cin >> s;

		if (s == "anj")
			flag = true;
	}

	cout << (flag ? "뭐야;" : "뭐야?");
}