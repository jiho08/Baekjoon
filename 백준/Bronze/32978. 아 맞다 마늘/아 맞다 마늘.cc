#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	set<string> recipe;
	int n;
	cin >> n;


	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		recipe.insert(s);
	}

	for (int i = 0; i < n - 1; ++i)
	{
		cin >> s;
		recipe.erase(s);
	}

	cout << *recipe.begin();
}