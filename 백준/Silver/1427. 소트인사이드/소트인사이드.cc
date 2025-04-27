#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string n;
	cin >> n;

	sort(n.begin(), n.end(), [](char a, char b)
		{
			return a > b;
		});

	cout << n;
}