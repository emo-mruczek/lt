#include <string>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> mag;

        for (char c : magazine) {
            mag[c] += 1;
        }

        for (char c : ransomNote) {
            if (mag[c] != 0) {
                mag[c] -= 1;
            } else {
                return false;
            }
        }

        return true;
    }
};
