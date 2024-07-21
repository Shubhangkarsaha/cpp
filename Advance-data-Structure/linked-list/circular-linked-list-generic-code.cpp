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

    ~Node () {
        int val = this -> data;
        if (this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

void insertNode(Node* &tail, int element, int data) {

    //for Empty list case
    if (tail == NULL) {
        Node* node1 = new Node(data);
        tail = node1;
        node1 -> next = node1;
    } else {

        //for non-empty list case
        //assuming that element is present in that list

        Node* curr = tail;

        while (curr -> data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void deleteNode (Node* &tail, int value) {

    //empty list case
    if (tail == NULL) {
        cout << "List is Empty! Nothing to delete." << endl;
        return;
    } else {

        //non-empty list case
        //assuming thta value is present in that linked-list

        Node* prev = tail;
        Node* curr = prev -> next;

        while (curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //to delete current node we have to update tail
        // 1-node linked-list case

        if (curr == prev) { 
            tail = NULL;
        }
        else if (tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void printNode (Node* &tail) {

    Node* temp = tail;

    if (tail == NULL) {
        cout << "Linked list is empty." << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);
    cout << endl;
}

int main () {

    Node* tail = NULL;

    insertNode(tail, 5, 2);
    printNode(tail);

    insertNode(tail, 2, 5);
    printNode(tail);

    insertNode(tail, 2, 4);
    printNode(tail);

    insertNode(tail, 5, 8);
    printNode(tail);

    insertNode(tail, 8, 10);
    printNode(tail);

    deleteNode(tail, 8);
    printNode(tail);

    deleteNode(tail, 2);
    printNode(tail);

    deleteNode(tail, 10);
    printNode(tail);

    deleteNode(tail, 5);
    printNode(tail);

    deleteNode(tail, 4);
    printNode(tail);

    return 0;
}
