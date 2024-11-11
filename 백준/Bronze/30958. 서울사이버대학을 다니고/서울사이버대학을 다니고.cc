#include <iostream>
using namespace std;
int cnt[26], n, answer;
string song;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;
    cin.ignore();
    getline(cin, song);

    for (char c : song)
    {
        if (c >= 'a' && c <= 'z') // 소문자인지 확인
        {
            ++cnt[c - 'a'];
        }
    }

    for (int ret : cnt)
    {
        answer = max(answer, ret);
    }

    cout << answer;
}