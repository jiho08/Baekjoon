#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int lv, s;
	string verdict;

	cin >> lv >> verdict;

	if (verdict == "perfect")
		s = 1000 * lv;
	else if (verdict == "great")
		s = 600 * lv;
	else if (verdict == "cool")
		s = 400 * lv;
	else if (verdict == "bad")
		s = 200 * lv;
	else
		s = 0;

	cout << s;
}