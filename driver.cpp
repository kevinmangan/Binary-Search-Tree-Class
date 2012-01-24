// Kevin Mangan
// CISC 2200 Data Structures
// driver.cpp for Tree Lab

#include <iostream>
#include "Tree.h"
using namespace std;


int main(){


	Tree tree1, tree2, tree3, tree4;  // empty trees

	tree1.setRootData(12);
	tree1.attachLeft(6);
	tree1.attachRight(13);

	tree2.setRootData(25);
	tree2.attachRight(33);
	tree2.attachLeftSubTree(tree1);

	tree3.setRootData(67);
	tree3.attachRight(68);
	
	tree4.setRootData(75);
	tree4.attachLeftSubTree(tree3);
	tree4.attachRight(88);

	Tree mainTree(50, tree2, tree4);

	cout << "\nHere is an in-order traversal of the Tree: " << endl;
	mainTree.inOrderTraversal();
	cout << endl << endl;

	cout << "\nHere is a pre-order traversal of the Tree: " << endl;
        mainTree.preOrderTraversal();
        cout << endl << endl;

	cout << "\nHere is a post-order traversal of the Tree: " << endl;
        mainTree.postOrderTraversal();
        cout << endl << endl;







}
