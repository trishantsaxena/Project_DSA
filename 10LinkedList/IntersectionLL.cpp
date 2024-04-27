#include<iostream>
class Node
{

public:
    int data;
    Node* next;

    Node(/* args */){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertionAtHead(Node* &head, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
    }
    else{
        
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void printLL(Node* head){
    Node* temp = head;

    if(temp == NULL) return;

    std::cout<<temp->data<<" -> ";
    printLL(temp->next);
}

int main(){
    Node* head = NULL;
    InsertionAtHead(head,100);
    InsertionAtHead(head,90);
    InsertionAtHead(head,80);
    InsertionAtHead(head,70);
    InsertionAtHead(head,60);
    InsertionAtHead(head,50);

    std::cout<<"Original Linked List:\t";

    printLL(head);

    return(0);
}
