#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        std::string pref {""};
        int ind {0};
        char curr {};

        while (true) {
            if (ind >= static_cast<int>(strs[0].size())) return pref;
            curr = {strs[0][ind]};

            for (int i = 1; i < static_cast<int>(strs.size()); ++i) {
                if (ind >= static_cast<int>(strs[i].size()) ||strs[i][ind] != curr) return pref;

            }
            
            pref += curr;
            ++ind;
        } 

        return pref;
    }
};
