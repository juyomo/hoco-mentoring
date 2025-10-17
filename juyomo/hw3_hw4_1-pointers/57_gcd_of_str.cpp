// Author: Juyoung Moon
// https://leetcode.com/problems/greatest-common-divisor-of-strings/

// HOCO Mentoring HW 3
// https://github.com/juyomo/hoco-mentoring

class Solution {
public:
    int findGCF(int a, int b) {
        int min = (a < b) ? a : b;
        for (int i = a; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                return i;
            }
        }
        return 1;
    }

    bool checkGCD(string substr, string str) {
        int shortLen = substr.length();
        int longLen = str.length(); 
        for (int i = 0; i < longLen/shortLen; i++) {
            if (str.substr(i * shortLen, shortLen) != substr) {
                return false;
            }
        }
        return true;
    }

    string gcdOfStrings(string str1, string str2) {
        int a = str1.length();
        int b = str2.length();
        int gcf = findGCF(a, b);
        for (int i = gcf; i >= 1; i--) {
            if (gcf % i == 0) {
                string candidate = str1.substr(0, i);
                if (checkGCD(candidate, str1) && checkGCD(candidate, str2)) {
                    return candidate;
                }
            }
        }
        return "";
    }

};
