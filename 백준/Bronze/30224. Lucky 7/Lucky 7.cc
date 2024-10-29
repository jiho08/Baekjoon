#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	bool f = to_string(n).find('7') != string::npos;

	if (!f && n % 7 != 0)
		cout << 0;
	else if (!f && n % 7 == 0)
		cout << 1;
	else if (f && n % 7 != 0)
		cout << 2;
	else
		cout << 3;
}