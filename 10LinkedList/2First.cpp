#include<iostream>
class Node
{
private:
    /* data */
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
void insertAtHead(Node* &head, int data){
    //Node* temp = head;
    if (head == NULL)
    {
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
    if(temp->next == NULL) return;
    std::cout<<temp->data<<" -> ";
    printLL(temp->next);
}
int main(){
    Node* head = NULL;
    insertAtHead(head,80);
    insertAtHead(head,70);
    insertAtHead(head,60);
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,5);
    insertAtHead(head,2);

    printLL(head);
}
