class Solution {
public:
    void solve (vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans, bool pre) {

        //base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        } else {

            //include
            solve(nums, output, index+1, ans, false);

            if (index>0 && nums[index] == nums[index-1] && (!pre)) {
                return;
            }

        
            //exclude
            int element = nums[index];
            output.push_back(element);
            solve(nums, output, index+1, ans, true);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans, false);
        return ans;
    }
};
