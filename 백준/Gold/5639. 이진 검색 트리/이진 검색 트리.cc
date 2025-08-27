#include <iostream>
#include <vector>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* makeNode(int value)
{
	node* nd = new node;
	nd->data = value;
	nd->left = nullptr;
	nd->right = nullptr;
	return nd;
}

node* root = nullptr;

void insert(node* r, node* node)
{
	if (root == nullptr)
		root = node;
	else if (r->data < node->data)
		if (r->right == nullptr)
			r->right = node;
		else
			insert(r->right, node);
	else if (r->data > node->data)
		if (r->left == nullptr)
			r->left = node;
		else
			insert(r->left, node);
}

void postorder(node* node)
{
	if (node == nullptr)
		return;

	postorder(node->left);
	postorder(node->right);
	cout << node->data << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int value;

	while (cin >> value)
		insert(root, makeNode(value));

	postorder(root);
}