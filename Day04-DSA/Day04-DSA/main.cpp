//
//  main.cpp
//  Day04-DSA
//
//  Created by Harsh Yadav on 02/06/22.
//

#include <iostream>
//DAY-04 Strings & More Questions

int getNameLength(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverseString(char name[]){
    int lenth = getNameLength(name)-1;
    int start = 0;
    while(start<lenth){
        char tmp = name[start];
        name[start] = name[lenth];
        name[lenth] = tmp;
        
        start++;
        lenth--;
    }
    
    std::cout<<"Reverse String is: "<<name<<std::endl;
}

char toLowerCase(char input){
    if(input >= 'a' && input <= 'z'){
        return input;
    }
    else{
        char x = input -'A'; //this is the difference
        return x+'a'; //now adding diiference of Ascii value in a;
    }
} //Important

bool checkPalindrome(char name[]){
    int length = getNameLength(name)-1;
    int start = 0;
    
    //if not case sensitive.
    //Changing all char to lower case
    for(int i=0;i<=length;i++){
        name[i] = toLowerCase(name[i]);
    }
    
    while(start<length){
        if(name[start] == name[length]){
            start++;
            length--;
            return 1;
        }
        else{
            break;
        }
    }
    return 0;
} //basic implementation

int camelcase(std::string s) {
    int count = 1;
    for(int i=0;i<s.size();i++){
        if(65<=s[i] && s[i]<=90){
            count++;
        }
    }
    
    return count;
}



//MARK: Linked List
struct Node{
    int data;
    Node *next;
};

Node* head = NULL; //Head Pointer, initially pointing to NULL as Linked List is empty.
void insertNode(int x){
    
    Node * temp = new Node; //Creating new node.
    temp->next = NULL; // New Node is Created pointing to NULL.
    temp->data = x; //Inserting Data in Node.
    
    temp->next = head; //new node will point to Head,which was pointing to previous node....
    head = temp; //now head will point to
}

void printLinkedList(){
    Node *tmp = head;
    while(tmp !=NULL){
        std::cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    std::cout<<std::endl;
}

void insertAt(int position,int data){
    Node *temp = head;
    
    if(temp == NULL){ //if Linked list is Empty
        insertNode(data);
        std::cout<<"Linked List was empty, new element is added at first position."<<std::endl;
    }else{
        Node * node = new Node; //creating new node
        node->data = data; //inserting data
        
        for(int i=1;i<position-1;i++){
            temp = temp->next;
        } //now we are pointing to one position one previous.
        
        node->next = temp->next; //new node will point to node to whom it will replace.
        temp->next = node; //previous node will point to new node.
        //hopefully it will work.
        
    }
    
    std::cout<<"New Linked List after inserting New node at "<<position<<" is ";
    printLinkedList();
}


void deleteAt(int position){
    Node* temp = head;
    
    if (position == 1){
        head = temp->next; //head will be pointing next element.
        delete temp; //temp is pointing to first element i.e. what we have to delete.
    }
    for(int i=1;i<position-1;i++){
        temp = temp->next;
    }
    Node* removeNode = temp->next;
    
    temp->next = removeNode->next;
    
    delete removeNode;
    
    printLinkedList();
}


void reverseLinkedList(){
    Node* current = head;
    Node* prevNode = NULL;
    Node* nextNode;
    
    while(current->next == NULL){
        nextNode = current->next; //we are storing address/ptr of next node.
        current->next = prevNode; //now we are setting current node's next ptr to prev Node(of Non-reverse Linked List).
        
        prevNode = current; //or prevNode = prevNode->next; maybe?
        current = nextNode; //moving current node to nextnode to repeat the processs
    }
    
//    current->next = NULL;
    head = prevNode;
    
    std::cout<<head->next->data;
}


int main(int argc, const char * argv[]) {
//    char inputString[20];
    //Char Array will print until \0 comes and stops..
    //Any Space,Enter,Tab etc.
    
    //if Pressed Enter/Space/Tab is Entered then \0 will come.
    /*
     Enter you name:
     Harsh Mohan
     Your name is: Harsh
     Program ended with exit code: 0
     */
    
//    std::cout<<"Enter you name: "<<std::endl;
//    std::cin>>inputString;
//
//
//    std::cout<<"Your name is: "<<inputString<<std::endl;
//
//    std::cout<<"Length of your Name is: "<<getNameLength(inputString)<<std::endl;
//
//    reverseString(inputString);
//
//    std::cout<<"Checking Palindrome Condition: "<<checkPalindrome(inputString)<<std::endl;
    
    
    insertNode(4);
    insertNode(92);
    insertNode(18);
    insertNode(38);
    printLinkedList();
    
    insertAt(4, 69);
    
    deleteAt(1);
    
    reverseLinkedList();
   
    return 0;
}


