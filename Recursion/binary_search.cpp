#include <iostream>

using namespace std;

void print (int arr[], int s, int e) {

    for (int i=s; i<e; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch (int arr[], int s, int e, int k) {

    cout << endl;
    print (arr, s, e);

    if (s > e) {
        return false;
    }

    int mid = s + (e-s)/2;

    if (arr[mid] == k) {
        return true;
    } else if (arr[mid] < k) {
       return binarySearch (arr, mid+1, e, k);
    } else {
       return binarySearch (arr, s, mid-1, k);
    }
}

int main () {

    int arr[10] = {1,2,4,13,14,15,18,23,25,29};

    int k = 25;

    if (binarySearch(arr, 0, 10-1, k)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }


    return 0;
}
