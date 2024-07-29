// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void insertAtTail (Node* &tail, Node* curr) {
    tail -> next = curr;
    tail = curr;
} 

Node* sortList(Node *head){
    
   Node* zeroHead = new Node(-1);
   Node* zeroTail = zeroHead;
   Node* oneHead = new Node(-1);
   Node* oneTail = oneHead;
   Node* twoHead = new Node(-1);
   Node* twoTail = twoHead;

   Node* curr = head;

    //creating separate linked list
   while (curr != NULL) {

       int val = curr -> data;

       if (val == 0) {
           insertAtTail(zeroTail, curr);
       } else if (val == 1) {
           insertAtTail(oneTail, curr);
       } else if (val == 2) {
           insertAtTail(twoTail, curr);
       }
    
     curr = curr -> next;
   }

   //merge 3 list

   //1s is not empty

   if (oneHead->next != NULL) {
       zeroTail -> next = oneHead -> next;
   } else {
       //1s list is empty
       zeroTail -> next = twoHead -> next; 
   }

   oneTail -> next = twoHead -> next;
   twoTail -> next = NULL;

    //set head
    head = zeroHead -> next;

    //delete dummy nodes

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}
