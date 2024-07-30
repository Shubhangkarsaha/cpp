//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    
    
  private:
    Node* reverse (struct Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while (curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail (struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct Node* add(struct Node* num1, struct Node* num2) {
        
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while (num1 != NULL && num2 != NULL) {
            
            int sum = carry + num1 -> data + num2 -> data;
            int digit = sum % 10;
            
            
            // create node and add in answer linked list
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            
            num1 = num1 -> next;
            num2 = num2 -> next;
        }
        
        //if first list have any remaining data
        while (num1 != NULL) {
            int sum = carry + num1 -> data;
            int digit = sum%10;
            
            //create node and add in answer linked list
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            num1 = num1 -> next;
        }
        
        //if second list have any remaining data
        while (num2 != NULL) {
            int sum = carry + num2 -> data;
            int digit = sum%10;
            
            //create node and add in answer linked list
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            num2 = num2 -> next;
        }
        
        //if carry ahve remaining data
        while (carry != 0) {
            int sum = carry;
            int digit = sum%10;
            //create node and add in answer linkde list
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            
        }
        
        return ansHead;
    }

  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        
        //step-1 -> reverse input Linked list
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        //step-2 -> add 2 linked list
        Node* ans = add(num1, num2);
        
        //step-3
        ans = reverse(ans);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
