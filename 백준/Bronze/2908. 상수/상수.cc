#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	cout << (stoi(a) > stoi(b) ? a : b);
}