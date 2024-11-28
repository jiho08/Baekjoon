#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int h, m;
	cin >> h >> m;

	cout << (h - 9) * 60 + m;
}