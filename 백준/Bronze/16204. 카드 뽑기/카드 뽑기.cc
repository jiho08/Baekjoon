#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int s = min(m, k) + min(n - m, n - k);
    cout << s;
}