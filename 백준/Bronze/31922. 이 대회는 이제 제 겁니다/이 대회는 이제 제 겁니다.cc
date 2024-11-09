#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, p, c;
	cin >> a >> p >> c;

	cout << (a + c > p ? a + c : p);
}