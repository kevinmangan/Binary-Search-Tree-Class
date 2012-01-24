// Kevin Mangan
// CISC 2200 Data Structures
// source.cpp for Binary Search Tree Lab

#include <iostream>
#include "Tree.h"
using namespace std;

// Constructor
Tree::Tree(const int rootItem){

	root = new Node(rootItem, NULL, NULL);
}


// Constructor
Tree::Tree(const int rootItem, Tree& leftTree, Tree& rightTree){

	root = new Node(rootItem, NULL, NULL);

	attachLeftSubTree(leftTree);
	attachRightSubTree(rightTree);
}


// isEmpty
bool Tree::isEmpty(){

	return (root == NULL);
}


// Get root data
int Tree::getRootData(){

	if(!isEmpty())
		return root->data;
}

// Set root Data
void Tree::setRootData(int newItem){

	if(!isEmpty())
		root->data = newItem;
	else
		root = new Node(newItem, NULL, NULL);
}


// Attach a left node
void Tree::attachLeft(const int newItem){

	root->lPtr = new Node(newItem, NULL, NULL);
}

// Attach a right node
void Tree::attachRight(const int newItem){

        root->rPtr = new Node(newItem, NULL, NULL);
}

// PreOrder
void Tree::preOrderTraversal(){

	preOrder(root);
}

// InOrder
void Tree::inOrderTraversal(){

	inOrder(root);
}

// PostOrder
void Tree::postOrderTraversal(){

	postOrder(root);
}	

// Get Root Pointer
Node* Tree::getRootPtr(){
	
	return root;
}


// Set Root Pointer
void Tree::setRootPtr(Node *newRoot){

	root = newRoot;
}


// Set Children Pointers
void Tree::setChildPtrs(Node *nodePtr, Node *leftPtr, Node *rightPtr){

	nodePtr->lPtr = leftPtr;
	nodePtr->rPtr = rightPtr;
}


// Attach right left tree
void Tree::attachLeftSubTree(Tree& leftTree){

        root->lPtr = leftTree.getRootPtr();
        leftTree.setRootPtr(NULL);
}


// Attach right sub tree
void Tree::attachRightSubTree(Tree& rightTree){
	
	root->rPtr = rightTree.getRootPtr();
        rightTree.setRootPtr(NULL);
}


// PreOrder Traversal and print
void Tree::preOrder(Node *treePtr){

	if(treePtr != NULL){
		cout << endl;
		cout << treePtr->data << endl;
		preOrder(treePtr->lPtr);
		preOrder(treePtr->rPtr);
	}
}


// InOrder Traversal and print
void Tree::inOrder(Node *treePtr){

        if(treePtr != NULL){
		inOrder(treePtr->lPtr);
                cout << endl;
                cout << treePtr->data << endl;
                inOrder(treePtr->rPtr);
        }
}


// PostOrder Traversal and print
void Tree::postOrder(Node *treePtr){

        if(treePtr != NULL){
                postOrder(treePtr->lPtr);
                postOrder(treePtr->rPtr);
        	cout << endl;
                cout << treePtr->data << endl;
	}
}



