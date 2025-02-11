#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int lenA = a.size(), lenB = b.size();
    int maxLen = max(lenA, lenB);

    while
	(a.size() < maxLen) a = '0' + a;

    while
	(b.size() < maxLen) b = '0' + b;

    string result;
    int carry = 0;

    for (int i = maxLen - 1; i >= 0; i--)
    {
        int bitSum = (a[i] - '0') + (b[i] - '0') + carry;
        result += (bitSum % 2) + '0';
        carry = bitSum / 2;
    }

    if (carry)
        result += '1';

    reverse(result.begin(), result.end());
    result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));

    cout << result;
}