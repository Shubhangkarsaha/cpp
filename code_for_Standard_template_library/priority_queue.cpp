#include <iostream>
#include <queue>

using namespace std;

int main () {

    //basically the priority queue implementaion is done by using max heap
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n=maxi.size();

    cout << "printing the maxi priority_queue:" << endl;
    for (int i=0; i<n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;


    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m=mini.size();

    cout << "printing the mini priority_queue:" << endl;
    for (int i=0; i<m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "The priority queue is empty or not:" << mini.empty() << endl;

    return 0;
}