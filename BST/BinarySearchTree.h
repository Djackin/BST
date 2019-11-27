#pragma once
#include<ostream>
using namespace std;

template <typename T>
struct BinaryTreeNode
{
	T data;
	TreeNode* left;
	TreeNode* right;
};

template <typename T>
class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();
	bool IsEmpty() const;
	bool IsFull() const;
	void MakeEmpty();
	int GetLength() const;
	void Add(T item);
	void Delete(T item);
	void Retrieve(T& item, bool& found) const;
	void PrintTree(ostream& out) const;
private:
	BinaryTreeNode<T>* root;
};

