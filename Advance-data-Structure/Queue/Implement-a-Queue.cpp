#include <bits/stdc++.h> 
class Queue {

    int* arr;
    int size;
    int afront;
    int rear;

public:
    Queue() {
        
        size = 100001;
        arr = new int[size];
        afront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if (afront == rear) {
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int data) {
        
        if (rear == size) {
            cout << "Queue is already full." << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        
        if (afront == rear) {
            return -1;
        } else {
            int ans = arr[afront];
            arr[afront] = -1;
            afront++;

            if (afront == rear) {
                afront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        
        if (afront == rear) {
            return -1;
        } else {
            return arr[afront];
        }
    }
};
