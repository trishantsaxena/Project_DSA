#include<iostream>
class Node
{
private:
    /* data */
public:
    int data; 
    Node* next;
   Node(){
    this->next = NULL;
   }
   Node(int data){
    this->next = NULL;
    this->data = data;
   }
};
void insertionAtHead(Node* &head, int data){
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
    if(temp == NULL) {
        std::cout<<"X";
        return;
        }

    std::cout<<temp->data<<" -> ";
    printLL(temp->next);
}
Node* reverseLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return(prev);
}
int main(){
    Node* head = NULL;
    insertionAtHead(head, 100);
    insertionAtHead(head, 90);
    insertionAtHead(head, 80);
    insertionAtHead(head, 70);
    insertionAtHead(head, 60);
    insertionAtHead(head, 50);
    insertionAtHead(head, 40);
    insertionAtHead(head, 30);
    insertionAtHead(head, 20);
    insertionAtHead(head, 10);


    std::cout<<"\nLinked List before Reversal:\t";

    printLL(head);
    

    head = reverseLL(head);

    std::cout<<"\nLinked List After Reversal:\t";

    printLL(head);

    return(0);
}