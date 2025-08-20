#include <iostream>
#include <map>

using namespace std;

void preorder(char ch, map<char, pair<char, char>>& node)
{
	if (ch == '.')
		return;

	cout << ch;
	preorder(node[ch].first, node);
	preorder(node[ch].second, node);
}

void inorder(char ch, map<char, pair<char, char>>& node)
{
	if (ch == '.')
		return;

	inorder(node[ch].first, node);
	cout << ch;
	inorder(node[ch].second, node);
}

void postorder(char ch, map<char, pair<char, char>>& node)
{
	if (ch == '.')
		return;

	postorder(node[ch].first, node);
	postorder(node[ch].second, node);
	cout << ch;
}

int main()
{
	int n;
	cin >> n;

	map<char, pair<char, char>> node;

	while (n--)
	{
		char mid, left, right;
		cin >> mid >> left >> right;
		node[mid] = { left, right };
	}

	preorder('A', node);
	cout << '\n';
	inorder('A', node);
	cout << '\n';
	postorder('A', node);
}