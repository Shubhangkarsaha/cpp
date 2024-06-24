#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    //dynamically allocate memory for 2d array

    int** arr = new int*[n]; // pointer to store multiple arrays


    for (int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    //taking input in 2d array
    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            cin >> arr[i][j];

        }

    }

    cout << endl;

    //output
    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            cout << arr[i][j] << " ";

        }cout << endl;

    }

    //memory deallocate

    for (int i=0; i<n; i++) {
        delete [] arr[i];
    }

    delete [] arr;



    return 0;
}
