#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* I, Node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //Initializing ROOT to null
	}

	void insert(string element) //Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); //Allocate memory for the new node
		newNode->info = element; //assign value to the data field odf the new node
		newNode->leftchild = NULL; // Make the left child of the new node point to NULL
		newNode->rightchild = NULL; // Make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); //Locate the node which will be the parent of the node to be inserted

		if (parent == NULL) // if yhe parent is NULL (Tree is empty)
		{
			ROOT = newNode; // Mark the new node as ROOT
			return; // Exit
		}

		if (element < parent->info) // If the value in the data field of the new node is less than that of the parent
		{
			parent->leftchild = newNode; // Make the left child of parent to the new node
		}
	}
};