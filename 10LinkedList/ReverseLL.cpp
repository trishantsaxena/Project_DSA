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
    ~Node(){
        std::cout<<"Destructor called for:\t"<<this->data;
    }
};


int getLength(Node* head, int &count){
    Node* temp = head;
    if (temp == NULL) return(1);
    
    count++;
    
    getLength(temp->next, count);

}

void printLL(Node* head){
    Node* temp = head;
    if (temp == NULL) return;
    
    std::cout<<temp->data<<" -> ";
    printLL(temp->next);

}

void insertAtHead(Node* &head, Node* tail, int data){

    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    

}

/* void ReverseLL(Node* &head){
    //std::cout<<"\nIn Reverse Function.";
    //Node* temp = head;
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL)
    {   //std::cout<<"\nIn While Loop";
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }
    head = prev;
    
} */

Node* reverse(Node* prev, Node* curr){
    if (curr == NULL)
    {
        return(prev);
    }
    Node* next = curr->next;
    curr->next = prev;
    Node* ans = reverse(curr,next);
    return(ans);
}

Node*  ReverseLL(Node* head){
     Node* prev = NULL;
     Node* curr = head;

    return(reverse(prev,curr));
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    std::cout<<"\nBefore Reverse\t";
    printLL(head);
    Node* newHead = ReverseLL(head);
    std::cout<<"\nAfter Reverse:\t";
    printLL(newHead);

    return(0);
}