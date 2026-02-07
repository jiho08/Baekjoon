#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int cnt = 1;

	while (true)
	{
		int a, b;
		string op;
		cin >> a >> op >> b;

		if (op == "E")
			break;

		cout << "Case " << cnt << ": ";

		if (op == ">")
			 cout << (a > b ? "true" : "false");
		else if (op == ">=")
			cout << (a >= b ? "true" : "false");
		else if (op == "<")
			cout << (a < b ? "true" : "false");
		else if (op == "<=")
			cout << (a <= b ? "true" : "false");
		else if (op == "==")
			cout << (a == b ? "true" : "false");
		else
			cout << (a != b ? "true" : "false");

		cout << '\n';
		++cnt;
	}
}