#include<iostream>
class Node
{
private:
    /* data */
public:
    int data;
    Node* head;
    Node* next;
    Node* tail;
    Node(/* args */){
        this->next = tail;
        tail->next = head;
    }
    Node(int data){
        this->data = data;
        this->next = tail;
        tail->next = head;
    }
    ~Node(){
        std::cout<<"\nDestructor called for:\t"<<this->data;
    }    
};

void insertAtHead(Node* &head, int data){
    std::cout<<"\nEntered in insert function";
    Node* temp = head;
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    
}

void printCLL(Node* head, Node* tail){
    
    std::cout<<"\nEntered in Print Function.";

    Node* temp = head;

    if (temp == NULL)
    {
        std::cout<<"\nLinked List is empty.";
    }
    else if (temp->next->next == head)
    {
        std::cout<<"\nELIF ran";
        std::cout<<temp->data;
    }
    else
    {
        std::cout<<"\n";

        while (temp->next->next != head)
        {
            std::cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        std::cout<<temp->data;

    }
    
}
int main(){
    Node* head = NULL;
    Node* tail;
    insertAtHead(head,50);
     printCLL(head);
/*     insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,5); */

   

    return(0);
}
