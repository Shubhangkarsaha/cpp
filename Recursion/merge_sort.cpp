#include<iostream>
#include <vector>

using namespace std;

void mergeArrays (vector<int> &arr, int s, int e) {

    int mid = s +(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //merging array and putting it in the first array
    int mainArrayIndex = s;
    for (int i=0; i<len1; i++) {

        first[i] = arr[mainArrayIndex++];
    }

    //merging array and putting it in the second array
    mainArrayIndex = mid+1;
    for (int i=0; i<len2; i++) {

        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Deleting the dynamically allocated memory to prevent memory leak
    delete[] first;
    delete[] second;
}

void mergeSortR (vector<int> &arr, int s, int e) {

    //base case 
    if (s >= e) {
        return;
    }
    // cout << "HI";

    int mid = s + (e-s)/2;

    //recursive call for left array
    mergeSortR(arr, s, mid);

    //recursive call for right array
    mergeSortR (arr, mid+1, e);

    //merge two individual array
    mergeArrays (arr, s, e);

}

int main () {

    vector<int> arr = {12,4,5,7,3,1,9,69,78,45,78,113};

    int n = arr.size();
    int s = 0;
    int e = n-1;

    mergeSortR (arr, s, e);

    cout << "Merge Sorted Array: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
