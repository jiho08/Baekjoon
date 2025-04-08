#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<char> v;

	while (true)
	{
		v.push_back(n % 9);
		n /= 9;

		if (n == 0)
			break;
	}

	reverse(v.begin(), v.end());

	for (const int i : v)
		cout << i;
}