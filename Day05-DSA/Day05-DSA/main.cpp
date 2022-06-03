//
//  main.cpp
//  Day05-DSA
//
//  Created by Harsh Yadav on 03/06/22.
//

#include <iostream>

struct Node{
    int data;
    Node* next;
};

Node* head = NULL; //Head ptr, pointing to Head, initially Linked List is empty so head Pointing towards nothing i.e. NULL.

//void insertN(Node* &headPtr){ //Passing reference of HeadPtr.
//    Node* tmp = headPtr;
//}




void insertNode(Node **headPtr,int data){ //Passing pointer of pointer(Head Ptr).
    Node* temp = *(headPtr); //DeRef. ptr to Head ptr.
    
    Node *node = new Node; //Creating New Node
    node->data = data;
    
    if(temp == NULL){ //HeadPtr/temp ptr pointing to NULL ---> Linked List is Empty
        *(headPtr) = node; //node will be first element/Head node.
        node->next = NULL;
    }
    else{  //if Linked List is Not Empty
        while(temp->next != NULL){
            temp = temp->next;
        }
        
        temp->next = node;
        node->next = NULL;
    }
    //??
    temp = NULL;
    free(temp);
}

void printLinkedList(Node* &headptr){
    Node* temp = headptr;
    
    while (temp != NULL) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    delete temp;
    std::cout<<std::endl;
}

void deleteNode(Node* &headPtr, int position){
    Node* temp = headPtr;
    int posi = 1;
    if (position == 1){
        
    }
    while (posi != position-1) {
        temp = temp->next;
        posi++;
    } //now temp will point to preceeding node that has to be deleted.
    
    Node* delNodePtr = temp->next; //ptr to node that has to be deleted.
    
    temp->next = delNodePtr->next; //Now prevNode will point to nextNode (wrt delNode)
    
    delNodePtr->next = NULL;
//    delete delNodePtr;
    free(delNodePtr);
}

void insertAt(Node **headPtr, int position, int data){
    
}

void pushBack(Node** headPtr,int data){ //inserting element at first position
    Node* tmp = *(headPtr);
    
    Node* node = new Node;
    node->data = data;
    
    if(tmp == NULL){
//        (*(headPtr))->next = node;
        tmp->next = node;
        node->next = NULL;
    }
    else{
        node->next = tmp; //new head node will point to former head node.
        *headPtr = node;
    }
    free(tmp);
}

void popBack(Node** headPtr){ //removing element from head.
    Node* tmp = *(headPtr);
    if(tmp == NULL){
        std::cout<<"Linked List is empty, can't remove any element."<<std::endl;
    }
    else{
        (*headPtr) = tmp->next; //Head ptr will point to second node, which will be first.
        tmp->next = NULL;
        
//        delete tmp; ???
        tmp = NULL;
    }
}

void reverseLinkedList(Node* &head){ //Reversing Linked List
    Node* current = head;
    Node* prev = NULL;
    
    while (current != NULL) {
        Node* next = current->next; //storing next node.
        current->next = prev; //reversing node.
        
        prev = current; //Moving Forward.
        current = next; //Moving Forward.
    }
    head = prev;
    
}


int getNode(Node* llist, int positionFromTail) {
    //A) reverse->iterate
    //B) length-positionFromtail->find result.
    Node* temp = llist;
    int length = 0;
    
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    
    int positionFromHead = length-positionFromTail;
    temp = llist;
    
    for(int i=0;i<positionFromHead-1;i++){
        temp = temp->next;
    }
    return temp->data;
}

/*
 SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
     
     SinglyLinkedListNode* temp = llist;
     SinglyLinkedListNode* dummy = temp->next;
     
     while(temp != nullptr){
         while(dummy != nullptr && (temp->data == dummy->data)){
             dummy = dummy->next;
         }
         temp->next = dummy;
         temp = temp->next;
     }
     return llist;
 }
 */



int main(int argc, const char * argv[]) {
    insertNode(&head, 5);
    insertNode(&head, 2);
    insertNode(&head, 8);
    insertNode(&head, 4);
    
    printLinkedList(head);
    
//    deleteNode(head, 1);
    printLinkedList(head);
    
//    pushBack(&head,69);
//    printLinkedList(head);
//    popBack(&head);
//    printLinkedList(head);
//
//    reverseLinkedList(head);
    
    std::cout<<getNode(head, 0)<<std::endl;
//    printLinkedList(head);
    return 0;
}
