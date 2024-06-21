#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of water bottles

        vector<int> prices(N);
        for (int i = 0; i < N; ++i) {
            cin >> prices[i]; // Price of each bottle
        }

        // Using a set to store prices in descending order and remove duplicates
        set<int, greater<int>> unique_prices(prices.begin(), prices.end());

        // Convert set to vector to access second element easily
        vector<int> sorted_prices(unique_prices.begin(), unique_prices.end());

        if (sorted_prices.size() < 2) {
            cout << 0 << endl;
        } else {
            cout << sorted_prices[1] << endl;
        }
    }

    return 0;
}
