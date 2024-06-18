class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> temp;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int tot = row * col;

        int startingRow = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;
        int startingCol = 0;

        while (count < tot) {

            //printing staring row
            for (int i = startingCol; count < tot && i <= endingCol; i++) {
                temp.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //printing ending col
            for (int i = startingRow; count < tot && i <= endingRow; i++) {
                temp.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //printing ending row
            for (int i=endingCol; count < tot && i >= startingCol; i--) {
                temp.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //printing starting col
            for (int i = endingRow; count < tot && i >= startingRow; i--) {
                temp.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return temp;
    }
};
