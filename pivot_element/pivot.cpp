#include <iostream>
#include <vector>

using namespace std;

//getting the pivot element
int getpivot (vector<int>& arr, int size) {

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while (s < e) {

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;  
    }
    return s;
}

// binary search to find the pivot index in logn time complexity
int binary_search (vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    //using this formula to handle the range of integer not exceeding INT_MAX
    int mid = start + ((end - start) / 2);

    while (start <= end) {

        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
//searching and rotate the element at k th index
int search(vector<int>& arr, int n, int k)
{
    int pivot = getpivot(arr, n);
    //tail recursion
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binary_search(arr, pivot, n-1, k); // recursive call
    } else { //recursive call
        return binary_search(arr, 0, pivot-1, k);
    }
}

int main () {

    vector<int> arr;
    int n,k;
    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cin >> k;

    search(arr,n,k);

    return 0;
}
