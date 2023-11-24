#include<iostream>
class Node{
    public:
    int data;
    Node* next;

    Node():next(NULL){}
    Node(int data):data(data) ,next(NULL){}
};
void printLL(Node* head){
    Node* temp = head;
    if(temp == NULL) return;

    std::cout<<temp->data<<"->";
    printLL(temp->next);
}
void insertAtHead(Node* &head, int d){



    Node* newNode = new Node(d);


    if (head == NULL)
    {
        head = newNode;
    }
    
    //Node* temp = head;

else{
        newNode->next = head;

        head = newNode;
}

}

void insertAtTail(Node* &tail, int d){
    Node* newNode = new Node(d);
    tail -> next = newNode;
    tail = newNode;
}
int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    int dataa = 600;
    int da = 800;
    Node *head = first;
    Node *tail = fifth;

    insertAtHead(head, dataa);
    insertAtTail(tail,da);
    printLL(head);
    return(0);
}