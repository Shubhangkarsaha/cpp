#include <iostream>

using namespace std;

//using two pointer approach by passing only a single pointer in recursion
void reverseString (string &name, int s) {

    int n = name.length();

    if (s>n-s-1) {  //the second pointer is managed through n-s-1
        return ;
    }

    swap (name[s], name[n-s-1]);
    s++;

    reverseString (name, s);
}

int main () {

    string name = "shubha";

    // int n = name.length();

    reverseString(name, 0); //passing only single pointer

    cout << name << endl;

    return 0;
}
