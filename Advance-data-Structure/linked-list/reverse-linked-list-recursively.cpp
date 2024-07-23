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

void reverseLL(LinkedListNode<int>* &head, LinkedListNode<int>* prev, LinkedListNode<int>* curr) {

    //base case
    if (curr == NULL) {
        head = prev;
        return;
    }

    //one case
    LinkedListNode<int>* forward = curr -> next;
    //recursive call
    reverseLL(head, curr, forward);
    curr -> next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    reverseLL(head, prev, curr);
    return head;
}
