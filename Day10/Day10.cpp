#include <iostream>

//MARK: Binary Tree
struct Node
{
    int data;
    Node* left;
    Node* right;

	Node(int val){
        data = val;

        left = NULL;
        right = NULL;
    }
};

/*
tree
      ----
       1    <-- root
     /   \
    2     3  
   /   
  4
*/
int main(int argc, char const *argv[])
{
	Node* root = new Node(1);

	root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

	return 0;
}

