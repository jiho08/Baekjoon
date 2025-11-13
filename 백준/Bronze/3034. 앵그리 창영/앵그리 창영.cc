#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n, w, h;
	cin >> n >> w >> h;

	while (n--)
	{
		int l;
		cin >> l;

		cout << (w >= l || h >= l || sqrt(pow(w, 2) + pow(h, 2)) >= l ? "DA\n" : "NE\n");
	}
}