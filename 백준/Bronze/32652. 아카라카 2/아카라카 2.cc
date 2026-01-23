#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    int k;
    cin >> k;
    cout << "AKA";

    for (int i = 0; i < k; ++i)
        cout << "RAKA";
}