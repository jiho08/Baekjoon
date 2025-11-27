#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    int n;
    cin >> n;

    int m;

    if (n >= 1000000)
        m = n * 20 / 100;
    else if (n >= 500000)
        m = n * 15 / 100;
    else if (n >= 100000)
        m = n * 10 / 100;
    else
        m = n * 5 / 100;

    cout << m << ' ' << n - m;
}