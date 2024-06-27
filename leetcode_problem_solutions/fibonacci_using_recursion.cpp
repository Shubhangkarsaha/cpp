#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        
        if (n == 0) {
            return 0;
        }

        if (n == 1) {
            return 1;
        }

        int ans = fib(n-1) + fib(n-2);

        return ans;
    }
};

int main() {

    Solution s;

    int n;

    cout << "Enter the number: " << endl;
    cin >> n;

    cout << s.fib(n) << endl;

    return 0;
}
