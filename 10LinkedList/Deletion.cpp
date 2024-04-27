#include<iostream>
class Node
{
private:
    /* data */
public:
    int data;
    Node*  next = NULL;
    Node(){
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node() {
        std::cout<<"\nDestructor called for:\t"<<this->data;
    }
};
Node* createTail(Node* head){
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    return(temp);
}
int getLength(Node* head){
    Node* temp = head;
    int len =0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return(len);
}
void deleteNode(Node* &head, int pos){
    
    int len = getLength(head);
    Node* prev = createTail(head);

    if (head == NULL) 
    {
        std::cout<<"\nLinked List is empty, cannot delete.";
    }
    
    if (pos == 1)
    {   
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
        std::cout<<"\nNew Head:\t"<<head->data;
    }
    else if (pos == len)
    {
        Node* tail = prev->next;
        prev->next = NULL;
        delete(tail); 
        tail = prev;
        std::cout<<"\nNew Tail:\t"<<tail->data;
    }
    else{

        Node* p = NULL;
        Node* curr = head;

        while (pos != 1)
        {
            p = curr;
            curr = curr->next;
            pos--;
        }
        p->next = curr->next;
        curr->next = NULL;
        delete(curr);

        
    }

    
}
void printLinkedList(Node* head){
    Node* temp = head;
    if (temp == NULL)
    {
        return;
    }
    std::cout<<temp->data<<" -> ";
    printLinkedList(temp->next);
}
int main(){
    int pos;

    Node* head1 = new Node(10);
    Node* head2 = new Node(20);
    Node* head3 = new Node(30);
    Node* head4 = new Node(40);
    Node* head5 = new Node(50);

    Node* head = head1;

    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
/*     Node* tail = createTail(head);
    std::cout<<"\ntemp->next->next\t"<<tail->data; */
        std::cout<<"\nOriginal Linked List:\t";
    printLinkedList(head); 
    std::cout<<"\nEnter position of which you want to remove the Node\t";
    std::cin>>pos;

    deleteNode(head, pos);
    std::cout<<"\n";
    printLinkedList(head); 

    return(0);
}
