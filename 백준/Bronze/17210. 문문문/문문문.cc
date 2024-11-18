#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    long n;
    char firstDoor;
    cin >> n >> firstDoor;

    if (n > 5)
    {
        cout << "Love is open door";
        return 0;
    }

    for (int i = 1; i < n; ++i)
    {
        firstDoor = firstDoor == '1' ? '0' : '1';
        cout << firstDoor << '\n';
    }
}