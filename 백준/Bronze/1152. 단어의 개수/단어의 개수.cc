#include <iostream>

using namespace std;

int main()
{
    string s;
    int c = 0;
    
    while (cin >> s)
        ++c;
    
    cout << c;
}