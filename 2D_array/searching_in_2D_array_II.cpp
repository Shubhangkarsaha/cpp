#include <iosream>
#include <vector>
#include <algorithm>

//searching in 2D array where each row and coloumn are sorted in ascending order

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRowIndex = 0;
        int startingColIndex = col - 1;

        while (startingRowIndex < row && startingColIndex >= 0) {
            int ele = matrix[startingRowIndex][startingColIndex];

            if (ele == target) {
                return 1;
            } else if (ele < target) {
                startingRowIndex++;
            } else {
                startingColIndex--;
            }
        }
        return 0;
    }
};
