#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    vector<array<int, 2>> v(41);

    v[0] = {1, 0};
    v[1] = {0, 1};

    for (int i = 2; i <= 40; ++i)
    {
        v[i][0] = v[i - 1][0] + v[i - 2][0];
        v[i][1] = v[i - 1][1] + v[i - 2][1];
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n][0] << ' ' << v[n][1] << '\n';
    }
}