#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node * left;
	node * right;
};

node *root = NULL;

node *newNode(int data)
{
	node *newNode = new node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node * insert(node *root, int data)
{

	node *temp = new node;
	temp->data = data;
	if (root == NULL)
	{
		root = newNode(data);
	}
	else if (data < root->data)
	{
		root->left = insert(root->left, data);	
	}
	else
	{
		root->right = insert(root->right, data);	
	}
	return root;
}


node  *min_value(node *n)
{
	//node *n=root;
	while (n->left != NULL)
	{
		n = n->left;
	}
	return n;

}
node  *max_value(node *n)
{
	//node *n=root;
	while (n->right != NULL)
	{
		n = n->right;
	}
	return n;

}
node *delete_node(node *root, int key)
{
	//base 
	if (root == NULL)
		return root;
	if (key < root->data)
		root->left = delete_node(root->left, key);
	else if (key > root->data)
		root->right = delete_node(root->right, key);
	else
	{
		//having only one child
		if (root->left == NULL)
		{
			node *temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right == NULL)
		{
			node *temp = root->left;
			delete root;
			return temp;
		}
		//having two child
		node* temp = min_value(root->right);
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data);
	}
	return root;
}

/*void display(node *root)
{
	if (root != NULL)
	{
		display(root->left);
		cout << root->data << ",";
		display(root->right);
	}
}*/
void inorder(node *root)
{
	if (root == NULL)
	return;

	inorder(root->left);
	cout << root->data << "  ";
	inorder(root->right);
}

void preorder(node *root)
{
	if (root == NULL)
	return;

	cout << root->data << "  ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node *root)
{
	if (root == NULL)
	return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << "  ";
}

int main()
{
	root = insert(root, 45);
	root = insert(root, 15);
	root = insert(root, 12);
	root = insert(root, 25);
	root = insert(root, 20);
	root = insert(root, 11);
	root = insert(root, 55);
	root = insert(root, 85);
	root = insert(root, 22);
	root = insert(root, 57);
	root = insert(root, 23);
	root = insert(root, 97);
	//display(root);
	preorder(root);
	cout << endl;
	delete_node(root, 55);
	delete_node(root, 97);
	delete_node(root, 23);
	delete_node(root, 20);
	//display(root);
	postorder(root);
	cout << endl;
	inorder(root);

	system("pause");
}