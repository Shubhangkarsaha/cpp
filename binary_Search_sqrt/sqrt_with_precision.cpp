#include <iostream>
using namespace std;

long long int binarySearch (int n) {

        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;

        while (s <= e) {
            long long int sqr = mid * mid;
            if (sqr == n) {
                return mid;
            } else if (sqr < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double addPrecision (int n, int precision, int tempsol) {

    double factor = 1;
    double ans = tempsol;

    for (int i=0; i<precision; i++) {
        factor = factor/10;

        for (double j=ans; j*j<n; j=j+factor) {
            ans = j;
        }
    }
    return ans;
}

int main () {

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int tempsol = binarySearch(n);

    cout << tempsol << endl;

    cout << "Square root of that number is:" << addPrecision(n, 3, tempsol) << endl;
    return 0;
}
