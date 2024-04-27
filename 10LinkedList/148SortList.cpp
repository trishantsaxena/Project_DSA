#include<iostream>
class Node
{
public:
   int data; 
    Node* next;
    Node():next(NULL){}
    Node(int d): data(d) , next(NULL){}
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

    if(temp == NULL) {
        std::cout<<"X";
        return;
    }

    std::cout<<temp->data<<" -> ";
    printLL(temp->next);
}
Node* findMid(Node* head){
    Node* fast = head;
    Node* slow = head;

    while (fast !=NULL)
    {
        fast = fast->next;
        if (fast!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
    }
    return(slow);
}
Node* sortList(Node* head){
    if (head == NULL || head->next == NULL)
        return head;
    Node* left = head;
    Node* mid = findMid(head);
    Node*right = mid->next;
    mid->next = NULL;

}
int  main(){
    Node* head = NULL;
    InsertionAtHead(head,20);
    InsertionAtHead(head,70);
    InsertionAtHead(head,1000);
    InsertionAtHead(head,80);
    InsertionAtHead(head,10);
    InsertionAtHead(head,6);
    InsertionAtHead(head,53);
    InsertionAtHead(head,2);

    std::cout<<"\nOriginal Linked List:\t";
    printLL(head);

    sortList(head);

    std::cout<<"\nSorted list:\t";
    printLL(head);

    return(0);

}
