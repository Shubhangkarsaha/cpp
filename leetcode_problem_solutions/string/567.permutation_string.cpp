#include <iostream>
#include <algorithm>

class Solution {
private:
    bool checkEquality (int a[26], int b[26]) {
        for (int i=0; i<26; i++) {
            if (a[i] != b[i]) {
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {

        //array for character count
        int c1[26] = {0};

        for (int i=0; i<s1.length(); i++) {
            int index = s1[i] - 'a';
            c1[index]++;
        }

        int i = 0;
        int windowSize = s1.length();
        int c2[26] = {0};
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            c2[index]++;
            i++;
        }

        if (checkEquality (c1, c2)) {
            return 1;
        }

        while (i < s2.length()) {
            char newChar = s2[i];
            int index = newChar - 'a';
            c2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            c2[index]--;
            i++;

            if (checkEquality(c1, c2)) {
                return 1;
            }
        }
        return 0;
    }
};
