#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int x;
	cin >> x;
	cout << (x > 5 ? "Success!" : "Oh My God!");
}