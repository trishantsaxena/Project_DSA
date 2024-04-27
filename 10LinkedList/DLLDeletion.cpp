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

    ~Node(){
        std::cout<<"\nDestructor Called for:\t"<<this->data;
    }
    
};
Node* createTail(Node* head){
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return(temp);
}
void printDLL(Node* head){
    Node* temp = head;
    std::cout<<"\n";
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

void DeleteDLLNode(Node* &head, Node* tail, int pos){
    int len = getLength(head);
    if (head == NULL)
    {
        std::cout<<"\nDLL is empty, Cannot delete any node.";
    }
    else if (head == tail)
    {
        delete(head);
        head = NULL;
        tail = NULL;
    }
    
    else
    {
        if (pos == 1)
        {
            // Delete at head

            Node* temp = head;
            head = temp->next;
            head->prev = NULL;
            temp->next = NULL;
            delete(temp);
            std::cout<<"\nNew Head:\t"<<head->data;
        }
        else if (pos >= len)
        {
            Node* tail = createTail(head);
            Node* prevNode = tail->prev;
            tail->prev = NULL;
            prevNode->next = NULL;
            delete(tail);
            tail = prevNode;
            std::cout<<"\nNew Tail:\t"<<tail->data;
        }
        else
        {
            Node* prevNode = NULL;
            Node* currNode = head;

            while (pos != 1)
            {
                prevNode = currNode;
                currNode = currNode->next;
                pos--;
            }

            prevNode->next = currNode->next;
            currNode->next->prev = prevNode;
            currNode->prev = NULL;
            currNode->next = NULL;
            delete(currNode);
        }
        
    }
    
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
    printDLL(head);
    std::cout<<"\nOriginal Lenght:\t"<<getLength(head);

    int pos;
    std::cout<<"\n Which node do you want to delete?:\t";
    std::cin>>pos;

    DeleteDLLNode(head, tail, pos);

    printDLL(head);

    std::cout<<"\nNew Length:\t"<<getLength(head);
    return(0);
}
