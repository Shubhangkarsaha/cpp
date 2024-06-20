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

    int a;

    cout << "Enter a number to check:" << endl;
    cin >> a;

    if (prime(a)) {
        cout << a << " is Prime Number." << endl;
    } else {
        cout << a << " is not Prime number." << endl;
    }
    return 0;
}