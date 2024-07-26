/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

//Detecting Loop using floyd detection Algorithm
Node* floydCycleDetect (Node* &head) {

    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {

        fast = fast -> next;
        if (fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;

        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

//getting the starting node
Node* getStartingNode (Node* head) {

    if (head == NULL) {
        return NULL;
    }

    Node* intersection = floydCycleDetect(head);

    if (intersection == NULL) {
        return NULL;
    }

    Node* slow = head;

    while (slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

//remove the cycle from the loop
Node *removeLoop(Node *head)
{
    if (head == NULL) {
        return NULL;
    }
    
    Node* StartofLoop = getStartingNode(head);

    if (StartofLoop == NULL) {
        return head;
    }

    Node* temp = StartofLoop;

    while (temp -> next != StartofLoop) {
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
}
