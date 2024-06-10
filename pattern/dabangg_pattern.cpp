#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter a number: " << endl;

    cin >> n;

    int row = 1;

    while (row <= n) {

        //first triangle
        int col = 1;
        int s = n - row + 1;
        while (col <= s) {
            cout << col;
            col++;
        }

        //second triangle
        int j = 1;
        while (j < row) {
            cout << "*";
            j++;
        }

        //3rd triangle
        int c = 1;
        while (c < row) {
            cout << "*";
            c++;
        }

        //4th trainagle
        int coloumn = 1;
        int p = n - row + 1;
        while (coloumn <= p) {
            cout << p;
            p--;
        }


        cout << endl;
        row++;
    }

    return 0;
}