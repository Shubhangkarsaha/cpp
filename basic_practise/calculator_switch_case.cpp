#include<iostream>

using namespace std;

int main () {

    int a,b;

    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;

    char opt;
    cout << "Choose the operation to perform:" << endl;
    cin >> opt;

    switch (opt) {
        case '+': cout << a+b << endl;
        break;
        case '-': cout << a-b << endl;
        break;
        case '/': cout << a/b << endl;
        break;
        case '*': cout << a*b << endl;
        break;
        case '%': cout << a%b << endl;
        break;
        default: cout << "Choose the appropriate operation and try again." << endl; 
    }

    return 0;
}