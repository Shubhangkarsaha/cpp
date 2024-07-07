#include<iostream>
#include<vector>

using namespace std;


class Solution {

    private:
        void solveLetter (string digits, vector<string>& arr, string output, int index, string mapping[]) {

            if (index >= digits.length()) {
                arr.push_back(output);
                return;
            }

            int number = digits[index] - '0';
            string val = mapping[number];

            for (int i=0; i<val.length(); i++) {
                output.push_back(val[i]);
                solveLetter (digits, arr, output, index+1, mapping);
                output.pop_back();
            }
        }

    public:
        vector<string> letterCombinations(string digits) {
            
            vector<string> arr;

            if (digits.length() == 0) {
                return arr;
            }

            int index = 0;
            string output = "";
            string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"}; 

            solveLetter (digits, arr, output, index, mapping);
            return arr;
        }
};
