#include <bits/stdc++.h>

void addSolution (vector<vector<int>> &ans, vector<vector<int>> &board, int n){

	vector<int> temp;

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}

bool isSafe(int r, int c, vector<vector<int>> &board, int n) {

	int x = r;
	int y = c;


	//check row left side by decreasing column <---------------
	while(y >= 0) {
		if (board[x][y] == 1){
			return false;
		}
		y--;
	}

	//check upper left diagonal
	//		\
	//		 \
	//   	  \
	x = r;
	y = c;
	while (x >= 0 && y >= 0) {
		if (board[x][y] == 1) {
			return false;
		}
		x--;
		y--;
	}

	//check lower left diagonal
	//	 		    /
	//	       /
	//	      /
	x = r;
	y = c;
	while (x < n && y >= 0) {
		if (board[x][y] == 1) {
			return false;
		}
		x++;
		y--;
	}
	return true;
}

void solveboard(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n) {

	if (col == n) {
		addSolution(ans, board, n);
		return;
	}

	for (int row = 0; row < n; row++) {
                if (isSafe(row, col, board, n)) {

					board[row][col] = 1;
					solveboard(col+1, board, ans, n);

					//backtrack
					board[row][col] = 0;
                }
        }
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> ans;
	vector<vector<int>> board(n, vector<int>(n,0));

	solveboard(0, board, ans, n);

	return ans;
}
