#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c, r[3];
	cin >> a >> b >> c;

	r[0] = a;
	r[1] = b;
	r[2] = c;

	sort(r, r + 3);
	cout << r[1];
}