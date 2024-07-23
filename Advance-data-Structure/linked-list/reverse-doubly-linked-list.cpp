#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
    Node (int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtBegining (Node* &head, Node* & tail, int data) {

    if (head == NULL) {
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    } 
}

void insertAtEnd (Node* &head, Node* &tail, int data) {

    if (tail == NULL) {
        Node* temp = new Node (data);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }    
}

void insertAtPosition (Node* &head, Node* &tail, int pos, int data) {

    if (pos == 1) {
        insertAtBegining(head, tail, data);
        return;
    }

    Node* temp = head;
    int c = 0;

    while (c < pos - 1) {
        temp = temp -> next;
        c++;

    }

    if (temp -> next == NULL) {
        insertAtEnd(head, tail, data);
        return;
    }

    Node* nodetoInsert = new Node(data);
    nodetoInsert -> next = temp -> next;
    temp -> next -> prev = nodetoInsert;
    temp -> next = nodetoInsert;
    nodetoInsert -> prev = temp;
}

//reverse code for doubly linked list
void reverseList (Node* &head, Node* &tail) {

    if (head == NULL) {
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        Node* forward = temp -> next;
        temp -> next = temp -> prev;
        temp -> prev = forward;
        prev = temp;
        temp = forward;
    }
    tail = head;
    head = prev;
}

void printNode(Node* &head) {

    Node* temp = head;

    while (temp != NULL) {

        // cout << temp -> prev << " ";
        cout << temp -> data << " ";
        // cout << temp -> next << " ";
        temp = temp -> next;

    } cout << endl;
}

int main () {

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    printNode(head);

    insertAtBegining(head, tail, 5);
    printNode(head);

    insertAtEnd(head, tail, 15);
    printNode(head);

    insertAtPosition(head, tail, 2, 7);
    printNode(head);

    insertAtPosition(head, tail, 3, 20);
    printNode(head);

    insertAtPosition(head, tail, 1, 2);
    printNode(head);

    insertAtPosition(head, tail, 5, 222);
    printNode(head);


    cout << "head -> " << head -> data << endl;
    cout << "Tail -> " << tail -> data << endl;

    reverseList(head, tail);
    printNode(head);

    cout << "head -> " << head -> data << endl;
    cout << "Tail -> " << tail -> data << endl;

    return 0;
}
