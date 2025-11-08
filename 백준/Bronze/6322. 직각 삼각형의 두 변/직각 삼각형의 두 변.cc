#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a, b, c, cnt = 1;
	cin >> a >> b >> c;

    while (a != 0 || b != 0 || c != 0)
    {
        cout << "Triangle #" << cnt++ << '\n';

        bool impossible = false;
        double result = 0;

        cout << fixed;
        cout.precision(3);

        if (a == -1)
        {
            if (c <= b)
                impossible = true;
            else
                result = sqrt(c * c - b * b);

            if (impossible)
                cout << "Impossible.";
            else
                cout << "a = " << result;
        }
        else if (b == -1)
        {
            if (c <= a)
                impossible = true;
            else
                result = sqrt(c * c - a * a);

            if (impossible)
                cout << "Impossible.";
            else
                cout << "b = " << result;
        }
        else if (c == -1)
        {
            result = sqrt(a * a + b * b);
            cout << "c = " << result;
        }

        cout << '\n' << '\n';
        cin >> a >> b >> c;
    }
}