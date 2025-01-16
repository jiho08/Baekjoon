#include <iostream>
#include <limits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    
    long long number;
    cin >> number;

    if (number >= numeric_limits<short>::min() && number <= numeric_limits<short>::max())
        cout << "short";
    else if (number >= numeric_limits<int>::min() && number <= numeric_limits<int>::max())
        cout << "int";
    else if (number >= numeric_limits<long long>::min() && number <= numeric_limits<long long>::max())
        cout << "long long";
}