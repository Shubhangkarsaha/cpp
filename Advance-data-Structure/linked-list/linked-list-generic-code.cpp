#include <iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* next;
    
    Node (int d) {
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node () {
        int val = this -> data;

        //memory free
        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory free for node with " << val << endl;
    }
};

void insertAtHead (Node* &head, Node* &tail, int data) {

    if (head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    } else {
        //creating & initializing a new node with data 
        Node* temp = new Node(data);

        //storing the head address to new node address part
        temp -> next = head;

        //pointing the new node as head
        head = temp;
    }

}

void insertAtTail(Node* &head, Node* &tail, int data) {
    
    if (tail == NULL) {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    } else {
        //creating & initializing a new node with data
        Node* temp = new Node(data);

        //storing the address of new node to previous node address part
        tail -> next = temp;

        //pointing the new node as tail
        tail = tail -> next;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {

    //insert at position 1
    if (pos == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int c = 0;

    while (c < pos-1) {
        temp = temp -> next;
        c++;
    }

    //insert at last position
    if (temp -> next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    //code for insert between 2 nodes
    Node* nodeInsert = new Node(d);

    nodeInsert -> next = temp -> next;
    temp -> next = nodeInsert;
}

void deleteNode(Node* &head, Node* &tail, int pos) {

    //deleting first node
    if (pos == 1) {

        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;

        delete temp;
        return;
    } else {
        //deleting any middle node or last node

        Node* curr = head;
        Node* prev = NULL;

        int c = 1;
        while (c < pos) {
            prev = curr;
            curr = curr -> next;
            c++;
        }
        if (curr -> next == NULL) {
            Node* curr = tail;
            prev -> next = NULL;
            tail = prev;
            delete curr;
            return;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

void printNode(Node* &head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

int main () {

    // Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = NULL;
    Node* tail = NULL;

    printNode(head);

    insertAtHead(head, tail, 15);
    printNode(head);

    insertAtHead(head, tail, 20);
    printNode(head);

    insertAtTail(head, tail, 25);
    printNode(head);

    insertAtPosition(head, tail, 3, 19);
    printNode(head);

    insertAtPosition(head, tail, 1, 9);
    printNode(head);

    insertAtPosition(head, tail, 5, 30);
    printNode(head);

    deleteNode(head, tail, 1);
    printNode(head);


    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    deleteNode(head, tail, 5);
    printNode(head);

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    deleteNode(head, tail, 3);
    printNode(head);

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    deleteNode(head, tail, 1);
    printNode(head);

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
    
    return 0;
}
