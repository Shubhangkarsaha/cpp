#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLL1(LinkedListNode<int>* head) {

    //base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    LinkedListNode<int>* sublist = reverseLL1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return sublist;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{   
    return reverseLL1(head);
}
