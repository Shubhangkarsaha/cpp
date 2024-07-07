#include <iostream>
#include <vector>

using namespace std;

class Subset {

    private:
        void solve (vector<int> nums, vector<int> output, int index, vector<vector<int>>& answer) {

            //base case
            if (index >= nums.size()) {
                answer.push_back(output);
                return;
            }

            //exclude
            solve (nums, output, index+1, answer);

            //include
            int element = nums[index];
            output.push_back(element);
            solve(nums, output, index+1, answer);
        }
        
    public:
        vector<vector<int>> subsets (vector<int>& nums) {

            vector<vector<int>> ans;
            vector<int> output;
            int index = 0;
            solve (nums, output, index, ans);
            return ans;
        } 
};

int main () {

    vector<int> nums = {1,2,3};

    Subset s;

    s.subsets(nums);

    for (int i=0; i< nums.size(); i++) {
        cout << nums[i] << " ";
    }cout << endl;

    return 0;
}
