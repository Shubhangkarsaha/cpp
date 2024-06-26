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
