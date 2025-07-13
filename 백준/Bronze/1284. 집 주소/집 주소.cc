#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    string s;

    while (cin >> s)
    {
        if (s == "0")
            break;

        int answer = 1;

        for (const char i : s)
        {
            if (i == '1')
                answer += 3;
            else if (i == '0')
                answer += 5;
            else
                answer += 4;
        }

        cout << answer << '\n';
    }
}