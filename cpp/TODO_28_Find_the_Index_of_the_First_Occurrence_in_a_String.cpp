#include <string>

class Solution {
public:
    static int strStr(std::string haystack, std::string needle) {

        int ind_h { 0 };
        int ind_n { 0 };
        int ret_ind { -1 };
        int needle_size {static_cast<int>(needle.size())};
        int size {static_cast<int>(haystack.size())};

        if (needle_size > size) return ret_ind;

        while (ind_h < size) {
            if (haystack[ind_h] == needle[ind_n]) {
                if (!ind_n) ret_ind = {ind_h};
                if (ind_n == needle_size - 1) break;
                ++ind_n;
                ++ind_h;
                continue;
            }    

            ++ind_h;
            ind_n = { 0 };
            ret_ind = { -1 };
        }

        return ret_ind;
    }
};

int main() {
    
    std::string a {"mississippi"};
    std::string b {"issip"};

    int res {Solution::strStr(a, b)};

    return 0;
}
