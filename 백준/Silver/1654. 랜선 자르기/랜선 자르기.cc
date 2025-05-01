#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, n;
    cin >> k >> n;

    vector<int> cables(k);

    for (int& i : cables)
        cin >> i;

    sort(cables.begin(), cables.end());

    long long left = 1, right = cables[k - 1], result = 0;

    while (left <= right)
    {
        const long long mid = (left + right) / 2;
        int sum = 0;

        for (const int& i : cables)
            sum += i / mid;

        if (sum >= n)
        {
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    cout << result;
}