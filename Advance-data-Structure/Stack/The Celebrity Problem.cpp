//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    bool knows (vector<vector<int>>& mat, int a, int b) {
        
        if (mat[a][b] == 1) {
            return true;
        } else {
            return false;
        }
    }
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        
        int n = mat[0].size();
        
        stack<int> s;
        
        //step1: push all element in stack
        for (int i=0; i<n; i++) {
            s.push(i);
        }
        
        // step2: get two elements and compare them
        while (s.size() > 1) {
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if (knows(mat,a,b)) {
                s.push(b);
            } else {
                s.push(a);
            }
        }
        
        int candidate = s.top();
        // step3: single element is potential celebrity
        // so verify it
        
        bool rowCheck = false;
        int zeroCount = 0;
        for (int i=0; i<n; i++) {
            if (mat[candidate][i] == 0) {
                zeroCount++;
            }
        }
        
        //all zeroes
        if (zeroCount == n) {
            rowCheck = true;
        }
        
        // column check
        bool colCheck = false;
        int oneCount = 0;
        
        for (int i=0; i<n; i++) {
            if (mat[i][candidate] == 1) {
                oneCount++;
            }
        }
        
        if (oneCount == n-1) {
            colCheck = true;
        }
        
        if (rowCheck == true && colCheck == true) {
            return candidate;
        } else {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends
