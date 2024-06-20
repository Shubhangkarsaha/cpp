// #include <iostream>
// #include <math.h>

// using namespace std;

// int main () {

//     int n;
//     cout << "Enter a number to convert in binary:" << endl;
//     cin >> n;

//     int ans = 0;
//     int i = 0;

//     while (n != 0) {

//         int bit = n & 1;

//         ans = (bit * int(pow(10, i)) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout << "Answer is: " << ans << endl;

// }

#include <iostream>

using namespace std;

int main () {

    int n;
    cout << "Enter a number to convert to binary:" << endl;
    cin >> n;

    // Initialize variables
    int ans = 0;
    int place = 1;

    while (n != 0) {
        // Extract the least significant bit
        int bit = n & 1;

        // Update the binary representation
        ans += bit * place;

        // Shift right to process the next bit
        n = n >> 1;

        // Update the place value (1, 10, 100, etc.)
        place *= 10;
    }

    cout << "Answer is: " << ans << endl;

    return 0;
}
