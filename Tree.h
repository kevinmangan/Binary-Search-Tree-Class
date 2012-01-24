// Kevin Mangan
// CISC 2200 Data Structures
// Tree Class: Tree.h

#include "Node.h"
#ifndef TREE_H
#define TREE_H


class Tree{


	public:
	
		// Constructors	
		Tree() :root(NULL){};
		Tree(const int);
		Tree(const int, Tree&, Tree&);
		
		bool isEmpty();
		int getRootData();
		void setRootPtr(Node*);
		Node* getRootPtr();
		void setChildPtrs(Node*, Node*, Node*);
		void insertElement(int);
		void inOrderTraversal();
		void preOrderTraversal();
		void postOrderTraversal();
		void setRootData(int);
		void attachLeft(int);
		void attachRight(int);
		void attachLeftSubTree(Tree&);
		void attachRightSubTree(Tree&);
		

	private:
	
		Node* root;
		void insertNode(Node*);
		void inOrder(Node*);
		void preOrder(Node*);
		void postOrder(Node*);

};


#endif
