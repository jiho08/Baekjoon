#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int k, d1, d2;
	cin >> k >> d1 >> d2;

	double t = (d1 - d2) / 2.0;
	double h = (k * k - t * t);
	cout << h;
}