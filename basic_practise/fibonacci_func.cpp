#include <iostream>

using namespace std;

void fibonacci (int n) {

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";

        a = b;
        b = nextnum;
    }
}

int main () {

    int n;

    cout << "Enter the number to print fibonacci series:" << endl;
    cin >> n;

    // int ans = fibonacci(n);

    cout << "Printing the fibonacci series:" << endl;
    fibonacci(n);

    return 0;
}