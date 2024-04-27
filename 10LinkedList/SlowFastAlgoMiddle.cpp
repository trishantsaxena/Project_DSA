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

Node* getMiddleUsingSlowFast(Node* head){

    if (head == NULL)
    {
        return;
    }
    
    // Here we initialize two pointer and assinged them on head.

    //Here, Fast go for 2 steps and slow go 1 step only, but the fact is that
    // slow will go 1 step if an only if fast go 2 steps.
    Node* fast = head;
    Node* slow = head;
    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
    }
    
    while (fast != NULL)
    {
        // Here we only proceed for one step because, if fast reach on NULL,
        // then fast->next will be going to throw a runtime error, to avoid that
        // we're proceeding with one step here, and checking the if fast is null or now
        // after that we're increament the fast and slow.
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;

            slow = slow->next;

        }
        
    }

    return(slow);
    
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
    
    Node* mid = getMiddleUsingSlowFast(head);

    std::cout<<"\nNew LL:\t";

    printLL(mid);

    return(0);

}