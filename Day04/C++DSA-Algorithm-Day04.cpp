#include <iostream>
// #include <array>
#include <vector>
// #include <dequef>
// using namspace std;

/*
TODO:
STL- Vector(done), Stack(done), Queues, Set, Map
Heaps 
Hashing
Greedy Techniques
Dynamic Programming
Number Theory Basics 
Graphs
*/

//Containers
/*
Array, Vector, Deque, List, *forward_list
Stack, Queue, Priority Queue
Set, Map, MultiSet, MultiMap
Unordered Set, Unordered Map, Unordered MultiSet, Unordered MultiMap
*/

//Algorithms
/*
Binary Search
Upper & Lower Bound
min/max
reverse/rotate
sort/swap
*/

//Stack
//push(), pop(), top(), empty() -> O(1)

//List
//


//dynamic memory allocation
//malloc calloc free realloc
//MARK: Dynamic Memory allocation using malloc,calloc..etc. They return a void pointer.

// int main(){
// 	void* p;
// 	p= malloc(sizeof(int)); // this will allocate memory of size one int in heap. This will give us a void pointer. 
// 	int* ptr = (int*)p; //type casting void pointer to int pointer.
// 	*ptr = 10; //dereferencing and storing value 10 in heap memory.
// 	std::cout<<ptr<<" "<<*ptr<<std::endl;
// 	free(p); //free heap memory.
// 	free(ptr);
// 	return 0;
// }



//MAKK: Vector
// V.size() tell how many element are stored. V.capacity() tell capacity of V vector i.e. how many element it can store.

// int main(){
// 	std::vector<int> V;
// 	V.push_back(4);
// 	V.push_back(56);
// 	std::cout<<V.capacity()<<std::endl;
// 	std::cout<<V.at(0)<<","<<V[1]<<std::endl;
// 	return 0;
// }



//MARK: Linked List
struct Node{
	int data; //value stored in Node
	Node* next; //pointer stored of Next Node
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node *head; //Head of linked list, global variable

void insert(int x){
	Node *temp = new Node(x);
	temp->next = NULL;

	head->next = temp;
}


int main(){
	std::cout<<"hello sublime Text editor."<<std::endl;
	std::cout<<"This is my second line in sublime editor."<<std::endl;

	head = NULL;
	// Node* alpha = new Node(10);
	// Node* beta = new Node(64);
	// Node* gamma = new Node(25);
	// Node* omega = new Node(83);

	// alpha->next = beta;
	// beta->next = gamma;
	// gamma->next = omega;
	// omega->next = NULL;

	// Node* head = alpha;
	// std::cout<<alpha->data<<std::endl;
	// std::cout<<beta->data<<std::endl;
	// std::cout<<gamma->data<<std::endl;
	// std::cout<<omega->data<<std::endl;

	// Node* n = alpha;
	// while (n != NULL) {
 //        std::cout << n->data << " "<<std::endl;
 //        n = n->next;
 //    }


	// std::cout<<alpha->next<<std::endl;
	// std::cout<<beta->next<<std::endl;
	// std::cout<<gamma->next<<std::endl;
	// std::cout<<omega->next<<std::endl;

	//MARK: Inserting element at the front/head.
    // Node* sigma = new Node(69);

    // sigma->next = alpha;
    // head
    // std::cout<<"next"<<std::endl;

    // n = sigma;
    // while (n != NULL) {
    //    std::cout << n->data <<" "<<std::endl;
    //    n = n->next;
    // }
}

