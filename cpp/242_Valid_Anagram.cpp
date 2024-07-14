#include <unordered_map>
#include <string>
#include <iostream>

// to practice hashmaps

class Solution {
public:
    static bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> u;
            for (const char& c: s) {
                //if (!(u.insert({c, 0})).second) {
                    u[c] += 1;
           // }
        }

        for (const char& c: t) {
            if (u[c] == 0) {
                return false;
            } else {
                u[c] -= 1;
                if (u[c] == 0) {
                    u.extract(c);
                }
            }

        }

        if(u.empty()) {
            return true;
        }

        //for (const auto& a: u) {
          //  std::cout << a.first << ": " << a.second << std::endl;
        //}

        return false;
    }
};


int main() {
    Solution::isAnagram("duppad", "d");

}
