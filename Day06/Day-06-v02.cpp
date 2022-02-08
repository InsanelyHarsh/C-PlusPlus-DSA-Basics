#include <iostream>
//MARK: Stacks

// int max_size = 123;
int A[123];
int top = -1;

void pushStack(int value){
	// handling Stack overflow
	if(top == 123-1){
		std::cout<<"ERROR: stack overflow"<<std::endl;
	}

	/*
	top = top + 1;
	A[top] = value;
	*/
	//or
	A[++top] = value;
	
}
void popStack(){
	if(top> -1){
		top = top - 1; //we do not care what value is stored in array(),we will access only top value.
	}
	else{
		std::cout<<"ERROR: Empty Stack."<<std::endl;
	}
}

int Top(){
	return A[top];
}


//MARK: Stack Using Linked List
struct Node{
	int data; //value stored in node
	Node* next; //pointer to next node
};

void pushStackLinkedList(Node* &head_ref,int value){
	Node* temp = head_ref;

	Node* new_node = new Node();

	if(temp == NULL){
		new_node->data = value; //adding data in node
		head_ref = new_node; //now head will point to new(first) node.
		new_node->next = NULL; //AND node will point to NULL
	}
	else{
		new_node->data = value;
		head_ref = new_node; //new node will be head of Linked List
		new_node->next = temp; //new node will point to prev head(which is second node) of Linked list.
	}
}
void TopStackLinkedList(Node** head_ptr){
	Node* temp = *(head_ptr);
	if(*head_ptr == NULL){
		std::cout<<"ERROR: Head is Empty."<<std::endl;
	}
	else{
		std::cout<<temp->data<<std::endl;
	}
}

void popStackLinkedList(Node** head_ptr){
	Node* temp = *(head_ptr);
	if(temp == NULL){
		std::cout<<"ERROR: Head is Empty."<<std::endl;
	}
	else{
		Node* second_node = temp->next;
		if(second_node == NULL){
			//there is one element
		}
		else{
			*(head_ptr) = second_node; //head pointer will point to second node.
			temp->next = NULL;
			delete temp;
		}
	}
}
int main(int argc, char const *argv[])
{
	//MARK: Stack Using Arrays
	/*
	pushStack(5);
	pushStack(6);

	std::cout<<Top()<<std::endl;

	popStack();

	std::cout<<Top()<<std::endl;
	*/

	//MARK: Stack Using Linked List
	Node* head = NULL; //initially head will point to null(nothing), linked list is empty.
	pushStackLinkedList(head,69);
	pushStackLinkedList(head,5);
	pushStackLinkedList(head,982);

	TopStackLinkedList(&head);

	popStackLinkedList(&head);
	TopStackLinkedList(&head);
	return 0;
}