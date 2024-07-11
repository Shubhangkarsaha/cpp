#include <iostream>
#include <vector>

using namespace std;

int binarySearch (vector<int>& vec, int s, int e, int t) {

    //base case
    if (s > e) {
        return -1;
    }

    int mid = s + (e-s)/2;

    
    if (vec[mid] == t) {
        return mid;
    } else if (vec[mid] > t) {
        binarySearch(vec, s, mid-1, t);
    } else {
        binarySearch (vec, mid + 1, e, t);
    }

}

int main () {

    vector<int> vec = {1,4,5,7,8,9,12,25,100};

    int n = vec.size();

    int target = 25;

    cout << "Element found at index: " << binarySearch (vec, 0, n-1, target) << endl;

    return 0;
}
