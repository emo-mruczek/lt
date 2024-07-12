#include <iostream>
#include <algorithm>


class Solution {
public:
    static bool isPalindrome(std::string s) {
        std::string new_string;
        
    /*    for (char a: s) {
           if (std::isalnum(static_cast<unsigned char>(a))) { //https://en.cppreference.com/w/cpp/string/byte/isalnum
                if(std::isupper(static_cast<unsigned char>(a))) {
                    char to_append = static_cast<char>(std::tolower(static_cast<unsigned char>(a)));

                }
            } 
        }*/
        //s consists only printable ASCII characters

        for (char a: s) {
            if (std::isalnum(a)) {
                if (std::isupper(a)) {
                    a = std::tolower(a);
                }

                new_string += a;
            }
        }

        std::cout << new_string << std::endl;


        
        for ( unsigned long i = 0, j = new_string.length()-1; i < new_string.length()/2 && j > new_string.length()/2-1; i++, j--) {
                if (new_string[i]!=new_string[j]) {
                    return false;
                }
        }


        return true;
    }
};

int main() {
    std::string s = "race a car";
    std::cout << (Solution::isPalindrome(s) ? "true" : "false") << std::endl;
}
