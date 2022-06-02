#include <iostream>

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }

};

void insertNode(Node** head_ptr){
    Node* temp = *(head_ptr);
}
int main(int argc, char const *argv[])
{
    Node* head = new Node(69);
    
    std::cout<<"Ehll";
    return 0;
}