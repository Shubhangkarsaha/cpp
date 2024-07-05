#include <iostream>
#include <vector>

using namespace std;

int partitionArray (vector<int> &arr, int s, int e) {

    int pivot = arr[s];

    int count = 0;
    //count number of element that less than pivot
    for (int i=s+1; i<=e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    //place th epivot in it's right position
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    int i=s, j=e;

    while (i < pivotindex && j > pivotindex) {

        while (arr[i] < pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotindex && j > pivotindex) {
            swap (arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}

void PrintArray (vector<int> &arr, int s, int e) {

    cout << "Current Size of the Array:" << arr.size() << endl;

    for (int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

//quick Sort by recursive call
void quickSortR (vector<int> &arr, int s, int e) {

    PrintArray (arr, s, e);

    if (s >= e) {
        return;
    }

    int p = partitionArray (arr, s, e);

    //sorting the left part of array by recursive ecall
    quickSortR (arr, s, p-1);

    //sorting the right part of array by recursive call
    quickSortR (arr, p+1, e);

}

int main () {

    vector<int> arr = {12,45,7,8,4,6,1,3,89,48};

    int n = arr.size();

    quickSortR (arr, 0, n-1);

    cout << "Printing the Array the array after Sorting:" << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
