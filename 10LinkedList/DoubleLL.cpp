#include<iostream>
class Node
{
private:
    /* data */
public:
int data;
Node* prev;
Node* next;

    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    
};
void printDLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}
int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
   return(count); 
}
void insertAtHead(Node* &head, Node* &tail, int data){
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        // head = head->next;
    }
    
}
void insertAtTail(Node* &head, Node* &tail, int data){
    if (tail == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        // tail = tail-next;
    }
    
}
void insertAtMiddle(Node* &head, Node* &tail, int data, int pos){
    
    int len = getLength(head);

    if (pos == 1) insertAtHead(head, tail, data);

    else if (pos == len) insertAtTail(head, tail, data);
    
    else
    {
        Node* newNode = new Node(data);
        Node* myPrev = NULL;
        Node* curr = head;

        while (pos != 1)
        {
            myPrev = curr;
            curr = curr->next;
            pos--;
        }

        myPrev->next = newNode;
        newNode->prev = myPrev;
        newNode->next = curr;
        curr->prev = newNode;
    }
    
    
}

Node* ReverseDLL(Node* head){

    Node* curr = head;
    Node* prevNode = curr->prev;

    while (curr != NULL)
    {
        Node* nextNode = curr->next;

        curr->next = prevNode;
        curr->prev = nextNode;

        prevNode = curr;
        curr - nextNode;
    }
    
    return(prevNode);
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    // int data;
    // std::cout<<"\nEnter Data:\t";
    // std::cin>>data;
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);

    insertAtMiddle(head, tail, 25, 3);
    insertAtMiddle(head, tail, 35, 5);
    std::cout<<"\nOriginal Linked List:\t";
    printDLL(head);
    
    Node* newHead = ReverseDLL(head);

    std::cout<<"\nAfter Reverse:\t";

    printDLL(newHead);

    // std::cout<<"\nLength of DLL:\t"<<getLength(head);
    return(0);
}
