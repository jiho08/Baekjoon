#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s = 0;
    cin >> n;

    vector<int> v(n);

    for (int& i : v)
        cin >> i;

    sort(v.begin(), v.end());

    for (int i = n; i > 0; --i)
        s += v[n - i] * i;

    cout << s;
}