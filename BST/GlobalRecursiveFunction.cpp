#include "GlobalRecursiveFunction.h"

template <typename T>
void MakeEmptyTree(BinaryTreeNode<T>*& root)
{
	if (root->left != NULL)
		MakeEmptyTree(root->left);
	if(root->right != NULL)
		MakeEmptyTree(root->right);
	delete root;
}

template <typename T>
int CountNodes(BinaryTreeNode<T>* root)
{
	if (root->left == NULL && root->right == NULL)
		return 1;
	else
		return CountNodes(root->left) + CountNodes(root->right);
}

template <typename T>
void Insert(BinaryTreeNode<T>*& root, T item);

template<typename T>
void GetPredecessor(BinaryTreeNode<T>* root, T& item);

template<typename T>
void DeleteNode(BinaryTreeNode<T>*& root);

template<typename T>
void Delete(BinaryTreeNode<T>*& root, T item);

template<typename T>
void Retrieve(BinaryTreeNode<T>* root, T& item, bool& found);

template<typename T>
void PrintInOrderTraversal(BinaryTreeNode<T>* root, ostream& out);

template<typename T>
void PrintPreOrderTraversal(BinaryTreeNode<T>* root, ostream& out);

template<typename T>
void PrintPostOrderTraversal(BinaryTreeNode<T>* root, ostream& out);