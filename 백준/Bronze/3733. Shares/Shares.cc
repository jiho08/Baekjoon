#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s;

	while (cin >> n >> s)
		cout << s / (n + 1) << '\n';
}
