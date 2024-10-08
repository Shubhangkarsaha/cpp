#include <stack>
class MinStack {

    stack<long long> s; // use long long to prevent overflow
    long long mini;

public:
    MinStack() : mini(INT_MAX) {
    }
    
    void push(long long val) {
        
        // for first element
        if (s.empty()) {
            s.push(val);
            mini = val;
        } else {
            if (val < mini) {
                s.push(2 * val - mini);
                mini = val;
            } else {
                s.push(val);
            }
        }
    }
    
    int pop() {
        // check underflow
        if (s.empty()) {
            return -1;
        }

        long long curr = s.top();
        s.pop();
        if (curr > mini) {
            return curr;
        } else {
            long long prevMin = mini;
            long long val = 2 * mini - curr;
            mini = val;
            return prevMin;
        }
    }
    
    int top() {
        // check availability of element
        if (s.empty()) {
            return -1;
        }

        long long curr = s.top();
        if (curr < mini) {
            return mini;
        } else{
            return curr;
        }
    }

//returning the min element from stack
    int getMin() {
        if (s.empty()) {
            return -1;
        } else {
            return mini;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
