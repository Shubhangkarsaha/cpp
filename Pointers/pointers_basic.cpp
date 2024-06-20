#include <iostream>

using namespace std;

int main () {

    int num = 400;

    int *ptr = &num;

    int arr[10] = {5,3,45};

    int i=2;

    cout << endl;

    cout << "Print type 1:" << num << endl;

    cout << "Print type 2:" << ptr << endl;

    cout << "Print type 3:" << *ptr << endl;

    cout << "Print type 4:" << &num << endl;

    cout << "Print type 5:" << *arr+1 << endl;

    cout << "Print type 6:" << *(arr+1) << endl;

    cout << "Print type 7:" << *(arr)+1 << endl;

    cout << "Print type 8:" << *arr+i << endl;

    cout << "Print type 9:" << *(arr+i) << endl;

    cout << "Print type 10:" << *(arr)+i << endl;


    return 0;
}
