#include <iostream>

using namespace std;

bool isSorted (int arr[], int size) {

    if (size == 0 || size == 1) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    } else {
        int remPart = isSorted(arr+1, size-1); // recursive call
        return remPart;
    }
}

int main () {

    int arr[15] = {1,2,3,4,12,13,14,17,21,25};

    isSorted (arr, 15);

    cout << endl;
    

    if (isSorted) {
        cout << "Array is Sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    cout << endl;

    return 0;
}
