#include <iostream>
#include <vector>

using namespace std;


class Solution {

    private:
        void solvePermutations (vector<int> nums, vector<vector<int>>& arr, int index=0) {

            if (index >= nums.size()) {
                arr.push_back (nums);
                return;
            }

            for (int j=index; j<nums.size(); j++) {
                swap (nums[index], nums[j]);
                solvePermutations (nums, arr, index+1);
                //backtrack
                swap (nums[index], nums[j]);
            }
        }

    public:
        vector<vector<int>> permute(vector<int>& nums) {

            vector<vector<int>> arr;
            // int index = 0;
            solvePermutations(nums, arr);
            return arr;
        }
};
