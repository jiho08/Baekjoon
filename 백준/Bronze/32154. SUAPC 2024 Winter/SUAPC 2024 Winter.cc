#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t[10] = { 11, 9, 9, 9, 8, 8, 8, 8, 8, 8 };
	string r[10] = { "A B C D E F G H J L M", "A C E F G H I L M", "A C E F G H I L M",
		"A B C E F G H L M", "A C E F G H L M", "A C E F G H L M", "A C E F G H L M",
		"A C E F G H L M", "A C E F G H L M", "A B C F G H L M" };

	int n;
	cin >> n;

	cout << t[n - 1] << '\n';
	cout << r[n - 1];
}