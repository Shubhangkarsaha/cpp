#include <iostream>
using namespace std;

class kQueues{

    private:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freeSpot;
    
    public:
        kQueues (int n, int k) {
            this -> n = n;
            this -> k = k;
            front = new int[k];
            rear = new int[k];

            for (int i=0; i<k; i++) {
                front[i] = -1;
                rear[i] = -1;
            }
            
            next = new int[n];

            for (int i=0; i<n-1; i++) {
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        }

        void enqueue (int data, int qn) {
            
            //check the array for Overflow
            if (freeSpot == -1) {
                cout << "Array is already overflow." << endl;
                return;
            }
            
            //find the first free index
            int index = freeSpot;

            //update freeSpot
            freeSpot = next[index];

            //check queue is empty
            if (front[qn-1] == -1) {
                front[qn-1] = index;
            } else {
                next[rear[qn-1]] = index; //connect the corresponding queue elements
            }

            // update the next
            next[index] = -1;

            //update the rear
            rear[qn-1] = index;

            //update the array
            arr[index] = data;

        }

        int dequeue (int qn) {

            //check underflow
            if (front[qn-1] == -1) {
                cout << "Queue is Empty Nothing to pop." << endl;
                return -1;
            }

            //find index
            int index = front[qn-1];

            //update front
            front[qn-1] = next[index];

            //upadte the freeSpot
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
        }
};

int main () {

    kQueues q(10, 3);

    q.enqueue(10,1);
    q.enqueue(12,1);
    q.enqueue(15,2);
    q.enqueue(20,2);
    q.enqueue(19,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    
    cout << q.dequeue(1) << endl;

    
    return 0;
}
