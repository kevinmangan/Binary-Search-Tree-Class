// Kevin Mangan
// CISC 2200 Data Structures
// Node class for trees: Node.h

#ifndef NODE_H
#define NODE_H


class Node{


	public:

		Node(){
			lPtr = NULL;
			rPtr = NULL;
		}


		Node* getRightPtr(){
			return rPtr;
		}

		Node* getLeftPtr(){
			return lPtr;
		}

		void setRightPtr(Node* ptr){
			rPtr = ptr;
		}

		void setLeftPtr(Node* ptr){
			lPtr = ptr;
		}



	private:

		Node(int nodeItem, Node *left, Node *right)
				:data(nodeItem), lPtr(left), rPtr(right) {}

		int data;
		Node *lPtr;
		Node *rPtr;

		friend class Tree;

};

#endif
