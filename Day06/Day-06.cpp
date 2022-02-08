#include <iostream>


struct Node{
	int data;
	Node* next;
};

void insertElement(Node** head_ptr,int value){
	Node* temp = *(head_ptr); //we are taking pointer of head. first we will deref it. (head is also pointer to first node which is stored in heap memory.)

	//Linked List is empty.
	if(temp == NULL){
		Node* first_Node = new Node; //making new node in heap memory
		first_Node->data = value; //adding value in first node of our linked list
		first_Node->next = NULL; //
		*head_ptr = first_Node;
	}
	else if(temp->next == NULL){
		
		//69->NULL
		//temp is pointing to 69(only element.)
		Node* new_Node = new Node;
		new_Node->data = value;
		new_Node->next = NULL; //this will be last

		temp->next = new_Node; //adding element t0 linked-list.
	}
	else{//linked-list: 69->40->NULL
		while(temp->next != NULL){ //temp will point to 69 first.	//temp next is NULL, loop will break.
			temp = temp->next; //temp will point to 40.
		}
		Node* new_Node = new Node;
		new_Node->data = value;
		new_Node->next = NULL; //this will be last

		temp->next = new_Node; //adding element t0 linked-list.
	}
}

void printLinkedList(Node** head_ptr){
	Node* temp = *(head_ptr);
	if(temp == NULL){
		std::cout<<"The linked list is empty.";
	}
	else{
		std::cout<<"Linked List: ";
		while(temp !=NULL){
			std::cout<<temp->data<<"->";
			temp = temp->next;
		}
		std::cout<<"NULL"<<std::endl;
	}
}

int CountofLinkedListElement(Node* &head_ref){ //by reference(Taking reference of pointer that is pointing to first node in heap memory.)
	Node* temp = head_ref;
	int count = 0;

	if(temp == NULL){ //linked list is empty
		return count;
	}
	else{
		while(temp != NULL){
			count = count + 1;
			temp = temp->next;
		}
		return count;
	}
}

void removeElementbyValue(Node* &head_ptr,int value){
	Node* temp = head_ptr;
	if(temp == NULL){
		std::cout<<"Linked List is empty"<<std::endl; //empty linked list.
	}
	else{
		while(temp->next->data != value && temp != NULL){
			temp = temp->next;
		} //temp will point to prev element which has to be deleted

		Node* prev_node = temp;
		Node* next_node = temp->next->next;
		Node* current_node = temp->next;

		prev_node->next = next_node; //removed element from linked list and connected prev and next element.
		delete current_node;
	}
}
void removeElementbyKey(Node** head_ptr,int key){
	Node* temp = *(head_ptr);
	if(temp == NULL){
		std::cout<<"Linked List is empty";
	}
	else{
		int index = 0;
		while(index != key){
			index = index+1;
			temp = temp->next;
		}
		// temp = NULL; //if there is one element
		Node* prev_node = temp;
		Node* next_node = temp->next->next;
		Node* current_node = temp->next;

		prev_node->next = next_node; //removed element from linked list and connected prev and next element.
		delete current_node;
	}
}

Node* reverseLlinkedList(Node* &head_ref){
	Node* temp = head_ref;

	// if(temp == NULL){
	// 	break;
	// }
	if(temp->next == NULL){ //if linked list holds one element then reverse will be same.
		return temp;
	}
	else{
		Node* current_node = temp;
		Node* prev_node = NULL;
		while(current_node != NULL){
			Node* tempo = current_node->next; //saving reference of next node.
			current_node->next = prev_node; //reversing node.

			//Two ways to move prev & current node.

			// current_node = current_node->next;
			// prev_node = prev_node->next;

			prev_node = current_node;
			current_node = tempo;
		}
		return prev_node;
	}
}
void pushElement(Node* &head_ref,int value){
	Node* temp = head_ref;
	Node* new_Node = new Node();
	if(temp == NULL){ //if linked list is empty.
		new_Node->data = value;
		new_Node->next = NULL;
		head_ref = new_Node;
	} // adding element at first position.
	else{
		head_ref = new_Node; //head pointer will pointer to new node.
		new_Node->data = value;
		new_Node->next = temp; //new node will point to prev first node, which address is stored in temp.
	}
}


void sumOfLastnElement(Node** head_ptr,int n){
	Node* temp = *(head_ptr);
	/*
	assuming length of linked list is x
	     v
	*/
	if (temp == NULL){
		std::cout<<"Linked List is empty."<<std::endl;
	}
	int count = CountofLinkedListElement(*(head_ptr));
	for(int i = 0; i<(count-n); i++){
		temp = temp->next;
	}
	// std::cout<<temp->data;
	int sum = 0;
	while(temp != NULL){
		sum = sum + temp->data;
		temp = temp->next;
	}
	std::cout<<"The sum of last n Element is: "<<sum<<std::endl;
}

int main(int argc, char const *argv[])
{


	int n=5;

	// std::cin>>n;
	int arr[n];
	// arr = {2,4,93,20,8};
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	// arr[5] = 6;

	int temp = 0;
	if(n%2 == 0){
		for(int i=0;i<n/2;i++){
			temp = arr[i];
			arr[i] = arr[(n-i-1)];
			arr[(n-i-1)] = temp;
		}
	}
	else{
		for(int i=0;i<(n+1)/2;i++){
			// std::cout<<arr[i]<<"**"<<arr[n-i-1]<<" ";
			temp = arr[i];
			arr[i] = arr[(n-i-1)];
			arr[(n-i-1)] = temp;
		}
	}

	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<" ";
	}

	Node* head;
	head = NULL; //head pointing to null, linked list is empty.


	insertElement(&head,69);
	insertElement(&head,40);
	insertElement(&head,95);
	
	// removeElementbyValue(head,40);
	// removeElementbyValue(head,95);

	// pushElement(head,55);

	// removeElementbyKey(&head,1);

	printLinkedList(&head);
	sumOfLastnElement(&head,2);
	// Node* reversed = reverseLlinkedList(head);
	// printLinkedList(&reversed);

	std::cout<<"Number of Element in linked list are: "<<CountofLinkedListElement(head)<<std::endl;


	return 0;
}