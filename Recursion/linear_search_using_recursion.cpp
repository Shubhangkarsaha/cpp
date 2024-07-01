#include <iostream>

using namespace std;


//for printing each and every call stack
void print (int arr[], int n) {
    cout << "Size of array is: " << n << endl;

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

// function for linear search with recursion
bool linearSearch (int  arr[], int size, int k) {

    print(arr, size);

    if (size == 0) {
        return false;
    }
    if (arr[0] == k) {
        return true;
    }

    int remCases = linearSearch(arr+1, size-1, k);
    return remCases;
}

int main () {

    int arr[10] = {3,4,1,15,16,5,7,8,9,6};

    int k = 6;

    linearSearch(arr, 10, k);

    // if (linearSearch (arr, 10, k)) {
    //     cout << "Element found." << endl;
    // } else {
    //     cout << "Element not found." << endl;
    // }

    return 0;
}
