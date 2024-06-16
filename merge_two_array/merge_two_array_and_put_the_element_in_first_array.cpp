#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeSortedArray (int arr1[], int m, int arr2[], int n) {

    // int m = arr1.size();
    // int n = arr2.size();

    int i=0, j=0, k=0;

    int* arr3 = new int[m+n];

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i<m) {
        arr3[k++] = arr1[i++];
    }
    while (j<n) {
        arr3[k++] = arr2[j++];
    }

    m += n;

    for (int i = 0; i <= m; ++i) {
        arr1[i] = arr3[i];
    }
    
    delete[] arr3;
    
}

void printArray (int arr1[], int n) {
    int i = 0;
    //int n = arr1.size();
    while (i <= n) {
        cout << arr1[i] << " ";
        i++;
    }cout << endl;
}

int main () {

    int arr1[] = {1,2,4,5,7};
    int arr2[] = {3,6,9};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // cout << m << endl;

    // int arr3[8] = {0};

    mergeSortedArray(arr1, m, arr2, n);

    printArray(arr1, m);

    return 0;
}
