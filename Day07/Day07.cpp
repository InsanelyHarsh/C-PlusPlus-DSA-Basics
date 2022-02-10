#include <iostream>

// int main(int argc, char const *argv[])
// {
	// int n = 4;
	// //r = 1,2,3,4
	// for(int r =1; r<=n;r++){ //rows

	// 	for(int j=1; j<=n-r;j++){ //spaces
	// 		std::cout<<" "; //3,2,1,0
	// 	}

	// 	for(int i=1; i<=r; i++){ //stars
	// 		std::cout<<"*"; //1,2,3,4
	// 	}
	// 	std::cout<<std::endl;
	// }

	// int n=4; //rows

	// int num = 0;
	// for(int i=1;i<=n;i++){ //row:1,2,3,4
	// 	if(i%2 == 0){
	// 		int temp = 4;
	// 		for(int j=1;j<=5;j++){
	// 			num = num + 1;
	// 			std::cout<<num+temp<<" ";
	// 			temp = temp-2;
	// 		}
	// 	}
	// 	else{
	// 		for(int j=1;j<=5;j++){ //column
	// 			num = num+1; //row = 1; num = 1,2,3,4,5 & row=3; num = 11,12,13,14,15
	// 			std::cout<<num<<" ";
	// 		}
	// 	}

	// 	std::cout<<std::endl;
	// }

// 	return 0;
// }

//MARK: Binary Tree
/*
Binary Tree, Binary Search Tree, AVL Tree, Red-Black Tree, Splay Tree, N-ary Tree, Tri Structure.
Suffix Tree, Huffman Tree, Heap Structure, B Tree, B+ Tree, R Tree, Counted-B Tree,K-D Tree.
Decision Tree, Markel Tree, Fenwick Tree, Range Tree
*/
struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

void printAllNodes(Node* &head_ref){
	Node* temp = head_ref;
	temp = temp->left;
	while(temp != NULL){
		std::cout<<temp->data;
		temp = temp->left;
	}
}
//MARK: Selection Sort:
void selectionSort(){
	int n = 6;
	int arr[n];
	arr[0] = 12;
	arr[1] = 45;
	arr[2] = 23;
	arr[3] = 51;
	arr[4] = 19;
	arr[5] = 8;

	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

				//printing
				for(int x=0;x<n;x++){
					std::cout<<arr[x]<<" ";
				}
				std::cout<<std::endl;
			}
		}
	}
}

void bubbleSort(){
	int n = 6;
	int arr[n];
	arr[0] = 12;
	arr[1] = 45;
	arr[2] = 23;
	arr[3] = 51;
	arr[4] = 19;
	arr[5] = 8;

	int counter = 1;
	while(counter < n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;

				for(int x=0;x<n;x++){
					std::cout<<arr[x]<<" ";
				}
				std::cout<<std::endl;
			}
		}
		std::cout<<"**"<<std::endl;
	}
}
int main(int argc, char const *argv[])
{
	//MARKING NODES
	Node* root_node = new Node(69); 

	Node* left_node = new Node(55);
	Node* right_node = new Node(10);

	//Nodes of Left
	Node* left_left = new Node(38);
	Node* left_right = new Node(7);

	//Nodes of right
	Node* right_left = new Node(62);
	Node* right_right = new Node(46);



	//CONNECTING NODES:
	root_node->left = left_node;
	root_node->right = right_node;

	left_node->left = left_left;
	left_node->right = left_right;

	right_node->left = right_left;
	right_node->right = right_right;

	// selectionSort();
	bubbleSort();
	// printAllNodes(root_node);
	// std::cout<<root_node->right->data;
	return 0;
}