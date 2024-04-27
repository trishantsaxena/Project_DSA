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
    if (temp == NULL) return(count);
    
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

void printMiddleNodeOfLL(Node* head){
    int count =0;
    int len = getLength(head,count);
        int k = len/2 +1;
        Node* mid = head;
        while (k != 1)
        {
            mid = mid->next;
            k--;
        }
        std::cout<<mid->data;
/*     if (len&1)
    {
        int k = len/2 +1;
        Node* mid = head;
        while (k != 1)
        {
            mid = mid->next;
            k--;
        }
        std::cout<<mid->data;

    }
    else
    {
        int k = len/2;
        Node* mid = head;
        while (k != 1)
        {
            mid = mid->next;
            k--;
        }
        std::cout<<mid->data;
    } */
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    std::cout<<"\nOriginal LL:\t";
    printLL(head);
    
    std::cout<<"\nLength of LL:\t"<<getLength(head,len);
    
    std::cout<<std::endl;

    printMiddleNodeOfLL(head);

    return(0);

}