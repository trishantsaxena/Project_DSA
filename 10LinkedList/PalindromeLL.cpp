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


/* int getLength(Node* head, int &count){
    Node* temp = head;
    if (temp == NULL) return(count);
    
    count++;
    
    getLength(temp->next, count);

} */

void printLL(Node* head){
    Node* temp = head;
    if (temp == NULL) return;
    
    std::cout<<temp->data<<" -> ";
    printLL(temp->next);

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
        newNode->next = head;
        head = newNode;
    }
    

}

Node* getMiddleUsingSlowFast(Node* head){
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

    return(slow);
    
}

Node* ReverseLL(Node* curr, Node* prev){

    if (curr == NULL)
    {
        return (prev);
    }

    Node* newNext = curr->next;
    curr->next = prev;
    return(ReverseLL(newNext, curr));
    
}

bool compareLL(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {

        if (temp1->data != temp2->data)
        {
            return(false);
        }
        else{
           temp1 = temp1->next;
           temp2 = temp2->next;
        }
    }
    return(true);
}

bool isPalindrome(Node* head){
    Node* mid = getMiddleUsingSlowFast(head);

    Node* secHead = mid->next;

    mid->next = NULL;
    Node* prev = NULL;
    Node* curr = secHead;
    secHead = ReverseLL(curr,prev);
    
    bool ans = compareLL(head, secHead);

    return(ans);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int len=0;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    // insertAtHead(head, tail, 1);

    std::cout<<"\nOriginal LL:\t";
    printLL(head);

    Node* mid = getMiddleUsingSlowFast(head);

    std::cout<<"\nMiddle of LL\t";
    printLL(mid->next);

    std::cout<<"\nReverse LL\t";
    Node* prev = NULL;
    Node* cur = mid->next;
    Node* head2 = ReverseLL(cur, prev);

    printLL(head2);
    
    if (isPalindrome(head))
    {
        std::cout<<"\nPalindrome";
    }
    else{
        std::cout<<"\nNot Palindrome";
    }
    
   

    return(0);

}