#include <iostream>
#include <vector>

using namespace std;

int findDuplicate (int arr[], int size) {

    int ans = 0;
    for (int i=0; i<size; i++) {
        ans = ans ^ arr[i];
        cout << ans << " ";
    } cout << endl;

    for (int i=0; i<size; i++) {
        ans = ans ^ i;
        cout << ans << " ";
    }
    cout << endl;

    return ans;
}

int main () {

    // int size;
    // cout << "Enter the Size of array:" << endl;

    // cin >> size;

    // int arr[size];

    // cout << "Enter the element of array:" << endl;
    // for (int i=0; i<size; i++) {
    //     cin >> arr[i];
    // }

    // cout << findDuplicate (arr, size) << endl;

    int a = 7 ^ 8;

    cout << a << endl;


    return 0;
}
