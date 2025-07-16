#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int sum = 300;

	for (int i = 0; i < 4; ++i)
	{
		int t;
		cin >> t;
		sum += t;
	}

	cout << (sum > 1800 ? "No" : "Yes");
}