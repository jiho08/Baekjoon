#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a + c == b + d)
		cout << "Either";
	else if (a + c > b + d)
		cout << "Yongdap";
	else
		cout << "Hanyang Univ.";
}