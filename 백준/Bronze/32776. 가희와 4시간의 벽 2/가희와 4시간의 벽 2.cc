#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int s, a, f, b;
	cin >> s >> a >> f >> b;

	cout << (s <= a + f + b || s <= 240 ? "high speed rail" : "flight");
}