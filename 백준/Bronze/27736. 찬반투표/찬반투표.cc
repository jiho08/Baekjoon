#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, yes = 0, no = 0, abs = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		++(t == 0 ? abs : (t == 1 ? yes : no));
	}

	if (abs >= n / 2 + 1)
		cout << "INVALID";
	else
		cout << (yes > no ? "APPROVED" : "REJECTED");
}