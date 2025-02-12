#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a = 0, b = 0;
    string k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
        ++(k[i] % 2 == 0 ? a : b);

    if (a == b)
        cout << -1;
    else
        cout << (a > b ? 0 : 1);
}