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
    static void getNode(int &data){
        std::cout<<"\nEnter Node to insert:\t";
        std::cin>>data;
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

void insertAtHead(Node* &head, Node* &tail, int data){
    /* 
        1. Create new node - temp
        2. temp-> next = head; 
        3. head = temp;   
    */
   if (head == NULL)
   {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
   }
   else
   {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
   }
}


void printLinkedList(Node* head){
    Node* temp = head;

/*     while (temp != NULL)
    {
        std::cout<<temp->data<<" -> ";
        temp = temp->next;
    } */

    if (temp == NULL)
    {
        return;
    }
  
    std::cout<<temp->data<<" -> ";
    printLinkedList(temp->next);
}

void insertAtTail(Node* &tail, Node* &head, int data){
    /* 
        1. Create a new node
        2. tail->next = newode
        3. tail = newnode
     */

       if (tail == NULL)
   {
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
   }

    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtMiddle(Node* &head, int data, int pos){

    /* 
        1. Check for position at which we're inserting is not less or 
            more than the length of linked list.
        2. Create two nodes which will act as pointer : Prev and Curr
            such that, prev = NULL; and curr = Head;
        3. Traverse through linked list and get to the position at which
            we need to insert the new node.
        4. prev->  next = newNode;
            newNode -> curr;
     */
    Node* tail = createTail(head);
    int length = getLength(head);
    if (pos <= 1)
    {
        insertAtHead(head,tail,data);
    }

    else if (pos >= length)
    {
        insertAtTail(tail,head,data);
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* newNode = new Node(data);

        while (pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }

        prev->next = newNode;
        newNode->next = curr;

    }
    
    
}

int main(){
/*     Node a;
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    std::cout<<"\nFor insertion at head:";
    a.getNode(data);
    insertAtHead(head,tail,data);




    std::cout<<"\nFor insertion at tail:";
    a.getNode(data);
    insertAtTail(tail,head,data); */

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


    int pos,data;
    std::cout<<"\nEnter Position at which you want to insert node\t";
    std::cin>>pos;

    std::cout<<"\nEnter data\t";
    std::cin>>data;

    insertAtMiddle(head,data,pos);

    printLinkedList(head);
    return(0);
}
