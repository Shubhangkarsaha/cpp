class Solution {
public:
    void sortColors(vector<int>& nums) {

      //Sort an array of 0s, 1s and 2s | Dutch National Flag problem
       const char red = 0, white = 1, blue = 2;
       int low = 0, mid = 0, high = nums.size()-1;
       while (mid <= high) {
            switch (nums[mid]) {
                case red:
                    swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                    break;
                case white:
                    mid++;
                    break;
                case blue:
                    swap(nums[mid], nums[high]);
                    high--;
            }
       }  
    }
};
