#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int ur, tr, uo, to;
	cin >> ur >> tr >> uo >> to;

	cout << 56 * ur + 24 * tr + 14 * uo + 6 * to;
}