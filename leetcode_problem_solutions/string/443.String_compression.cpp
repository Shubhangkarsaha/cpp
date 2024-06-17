#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int compress(vector<char>& chars) {
        int s = 0;
        int ansIndex = 0;
        int e = chars.size();

        while (s < e) {
            int k = s+1;
            while (k<e && chars[s]==chars[k]) {
                k++;
            }

            chars[ansIndex++] = chars[s];
            int c = k-s;

            if (c > 1) {
                string cnt = to_string(c);
                for (char ch: cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            s = k;
        }
        return ansIndex;
    }
};
