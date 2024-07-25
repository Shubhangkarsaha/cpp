/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    
    //base case
    if (head == NULL) {
        return NULL;
    }

    int n=0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp -> next;
        n++;
    }

    //if k is greater than the length of linked list then we should return the list as it is
    if (k > n) {
        return head;
    }

    //step1: reverse first k-group nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step2: recursive call
    if (next != NULL) {
        head -> next = kReverse(next, k);
    }

    //step3: return head of the reverse list
    return prev;
}
