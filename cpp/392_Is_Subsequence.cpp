#include <iostream>

class Solution {
public:
    static bool isSubsequence(std::string s, std::string t) {
        unsigned int i = 0;
        unsigned int counter = 0;
        unsigned int len = t.length();
        for (char c : s) {
            while (i < len) {
                if (c != t[i]) {
                    i++;
                } else {
                    counter++;
                    i++;
                    break;
                }
            }
        }

        if (counter == s.length()) {
            return true;
        } else {
            return false;
        }
    }
};


int main() {
    std::string test1 = "aaaaaa";
    std::string test2 = "bbaaaa";

    std::cout << (Solution::isSubsequence(test1, test2) ? "true" : "false") << std::endl;
    
}
