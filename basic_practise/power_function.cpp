#include <iostream>
using namespace std;

int power (int a, int b) {

    int ans = 1;
    for (int i=0; i<b; i++) {
        ans *= a;
    }
    return ans;
}

int main () {

    int a,b;

    cout << "Enter a number :" << endl;
    cin >> a;
    cout << "Enter the power of that nunber:" << endl;
    cin >> b;

    int answer = power (a,b);
    cout << "Answer is:" << answer << endl;

    return 0;
}