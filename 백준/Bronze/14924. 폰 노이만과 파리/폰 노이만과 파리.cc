#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int s, t, d;
	cin >> s >> t >> d;
	cout << d / (s * 2) * t;
}