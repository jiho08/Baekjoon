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

	int n;
	cin >> n;

	vector<string> recipe(n), myRecipe(n - 1);

	for (int i = 0; i < n; ++i)
		cin >> recipe[i];

	for (int i = 0; i < n - 1; ++i)
		cin >> myRecipe[i];

	set<string> r1(recipe.begin(), recipe.end());
	set<string> r2(myRecipe.begin(), myRecipe.end());

	set<string> diff;
	set_difference(r1.begin(), r1.end(), r2.begin(), r2.end(), inserter(diff, diff.end()));

	for (auto str : diff)
		cout << str << "\n";

	return 0;
}