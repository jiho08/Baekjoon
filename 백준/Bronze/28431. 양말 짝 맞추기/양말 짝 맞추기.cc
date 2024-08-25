#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int s[5];
	for (int i = 0; i < 5; i++)
		cin >> s[i];

	unordered_set<int> u;

	for (int i = 0; i < 5; i++)
	{
		if (u.find(s[i]) == u.end())
			u.insert(s[i]);
		else
			u.erase(s[i]);
	}

	for (int i : u)
		cout << i;

	return 0;
}