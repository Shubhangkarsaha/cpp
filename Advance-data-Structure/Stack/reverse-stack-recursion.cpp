void insertAtBottom (stack<int>& s, int num) {

    //base case
    if (s.empty()) {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s, num);

    s.push(n);
} 

void reverseStack(stack<int> &stack) {
    
    // base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);


    insertAtBottom(stack,num);
}
