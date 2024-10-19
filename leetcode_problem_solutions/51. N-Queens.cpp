class Solution {
private:

    void addSolution(vector<vector<char>> &board, vector<vector<string>> &ans, int n) {

        vector<string> temp;

        for (int i=0; i<n; i++) {
            string row = "";
            for (int j=0; j<n; j++) {
                row += board[i][j];
            }
            temp.push_back(row);
        }
        ans.push_back(temp);
    }

    bool isSafe(int col, int row, vector<vector<char>> &board, int n) {

        int x = row;
        int y = col;

        while (y >= 0) {
            if (board[x][y] == 'Q'){
                return false;
            }
            y--;
        }

        x = row;
        y = col;
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 'Q') {
                return false;
            }
            x--;
            y--;
        }

        x = row;
        y = col;
        while (x < n && y >= 0) {
            if (board[x][y] == 'Q') {
                return false;
            }
            x++;
            y--;
        }
        return true;
    }

    void solveboard(int col, vector<vector<char>> &board, vector<vector<string>> &ans, int n) {

        if (col == n) {
            addSolution(board, ans, n);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(col, row, board, n)) {
                board[row][col] = 'Q';
                solveboard(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<vector<char>> board(n, vector<char>(n,'.'));

        solveboard(0, board, ans, n);

        return ans;
    }
};
