#include<iostream>
class Node{
    public:
    int data;
    Node* next;

    Node(){
        std::cout<<"Instance created and called default Constructor.\n";
        this -> next = NULL;
    }
/*     Node(int data){
        this -> data = data;
        this -> next = NULL;
    } */
    Node(int data) : data(data), next(NULL){}
};
void printLL(Node* head){
    Node *temp = head;
/*     while (temp != NULL)
    {
        std::cout<<temp->data<<" -> ";
        temp = temp->next;
    }
     */
    if (temp == NULL)
    {
        return;
    }
    std::cout<<temp->data<<" -> ";
    printLL(temp -> next);
    
}
void sizeLL(Node *head, int &count){
    Node *temp = head;
    if (temp == NULL) return;
    ++count;
    sizeLL(temp -> next, count);
    
    
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

    Node *head = first;
    Node *tail = fifth;

    std::cout<<"\nhead->next-> = "<<head->next->next->data<<std::endl;

    // addAtHeat(*head, -10);

    printLL(head);
    int count = 0;
    sizeLL(head,count);
    std::cout<<"\nSize of LinkedList:\t"<<count;
    return(0);
}