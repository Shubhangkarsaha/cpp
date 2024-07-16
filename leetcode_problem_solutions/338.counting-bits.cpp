class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans;
        
        for (int i=0; i<=n; i++) {
            int c = 0;
            int a = i;

            while (a) {
                c++;
                a = a & (a - 1);
            }
            ans.push_back(c);
        }
        return ans;
    }
};
