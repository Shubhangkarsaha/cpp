#include <bits/stdc++.h>

bool isSafe(int newy, int newx, vector<vector<bool>> &vis, vector<vector<int>> &arr, int n) {

  if ((newy >= 0 && newy < n) && (newx >= 0 && newx < n) && (vis[newy][newx] != 1) && (arr[newy][newx] == 1)) {
      return true;
  } else {
      return false;
  }
}

void solve(int y, int x, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path) {

    //base case
    if (y == n - 1 && x == n - 1) {
        ans.push_back(path);
        return;
    }

    //visited
    vis[y][x] = 1;

    int dy[] = {1,0,0,-1};
    int dx[] = {0,-1,1,0};
    char dir[] = {'D', 'L', 'R', 'U'}; //corresponding path characters

    for (int i=0; i<4; i++) {
        int newy = y + dy[i];
        int newx = x + dx[i];

        if(isSafe(newy, newx, vis, arr, n)) {
            solve(newy, newx, arr, n, ans, vis, path + dir[i]);
        }
    }

    // //Down
    // if (isSafe(y + 1, x, vis, arr, n)) {
    //     solve(y+1, x, arr, n, ans, vis, path + 'D');
    // }

    // //Left
    // if (isSafe(y, x - 1, vis, arr, n)) {
    //   solve(y, x-1, arr, n, ans, vis, path + 'L');
    // }

    // // Right
    // if (isSafe(y, x + 1, vis, arr, n)) {
    //   solve(y, x+1, arr, n, ans, vis, path + 'R');
    // }

    // // Up
    // if (isSafe(y - 1, x, vis, arr, n)) {
    //   solve(y-1, x, arr, n, ans, vis, path + 'U');
    // }

    // Backtracking
    vis[y][x] = 0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n,0));
    string path = "";

    if (arr[0][0] == 0) {
        return ans;
    }

    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}
