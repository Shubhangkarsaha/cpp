#include <iostream>
#include <vector>

using namespace std;

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
