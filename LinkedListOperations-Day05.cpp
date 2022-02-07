// A complete working C++ program to demonstrate
// all insertion methods on Linked List

#include <iostream>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node(); // we are allocating dynamic memory in heap. we get pointer to heap memory.
								 // we get value from heap memory by -> arrow. 

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(Node* prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
		return;
	}

	/* 2. allocate new node */
	Node* new_node = new Node();

	/* 3. put in the data */
	new_node->data = new_data;

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;

	/* 5. move the next of prev_node as new_node */
	prev_node->next = new_node;
}

/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node();

	Node *last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. This new node is going to be
	the last node, so make next of
	it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty,
	then make the new node as head */
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
	{
		last = last->next;
	}

	/* 6. Change the next of last node */
	last->next = new_node;
	return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data<<std::endl;
		node = node->next;
	}
}

// void deleteNode(Node* &head_ref){
// }

//asumming we have to delete 6(which is stared value.)
//1,7,8,*6*,4
void deleteNode(Node** head_ref,int value){
	Node* temp = *(head_ref); //temp is pointing to first node currently.

	while(temp->next->data != value){
		temp = temp->next; //moving temp pointer to next node
	}
	//after ending to loop temp will point to 8(3rd index). prev_node which has to deleted
	
	Node* toDeleteNode = temp->next;
	
	temp->next = toDeleteNode->next; //changing node i.e. connecting prev & next node of deleting node., removing from linked list.
	delete toDeleteNode; //removing node from memory.
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;
	
	// Insert 6. So linked list becomes 6->NULL
	append(&head, 6);
	
	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	push(&head, 7);
	
	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	push(&head, 1);
	
	// Insert 4 at the end. So
	// linked list becomes 1->7->6->4->NULL
	append(&head, 4);
	
	// Insert 8, after 7. So linked
	// list becomes 1->7->8->6->4->NULL
	insertAfter(head->next, 8);
	
	cout<<"Created Linked list is: "<<std::endl;
	printList(head);
	
	deleteNode(&head,6);

	printList(head);
	return 0;
}
//Final Result: 1 7 8 6 4