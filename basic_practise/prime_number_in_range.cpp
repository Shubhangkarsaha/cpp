#include <iostream>

using namespace std;

bool prime (int num) {

    for (int i=2; i<num; i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {

    int a,b;

    cout << "Enter a number to check:" << endl;
    cin >> a >> b;

    //checking the prime number in the given range
    while (a <= b) {

        if (prime(a)) {
            cout << a << " " << endl;
            a++;
        } else {
           a++;
        }
    }

    return 0;
}
