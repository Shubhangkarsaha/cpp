#include <bits/stdc++.h>

void StackBottom (stack<int>& s, int x) {

    // base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call

    StackBottom(s, x);

    s.push(num);
} 

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    StackBottom (myStack, x);
    return myStack;
}
