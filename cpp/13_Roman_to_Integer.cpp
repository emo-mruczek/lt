#include <string>
#include <iostream>

class Solution {
public:
    /*enum Type {
        I = 1,
        V = 5,
        X = 10,
        L = 50,
        C = 100,
        D = 500,
        M = 1000
    };*/

    static int romanToInt(std::string s) {
        int result { 0 };
        int previous { 0 };
        int current { 0 };

        for (char c: s) {
            switch (c) {
                case 'I': current = { 1 }; break;
                case 'V': current = { 5 };
                case 'X': current = { 10 };
                case 'L': current = { 50 };
                case 'C': current = { 100 };
                case 'D': current = { 500 };
                case 'M': current = { 1000 };
                default: break;
            }

            if (!previous || previous == current) {
                result += current;
                previous = { current };
            } else {
                if (previous < current) {
                    result += current - previous;
                    previous = { 0 };
                }
            }
        }

        return result;
    }
};

int main() {
    int dupa = Solution::romanToInt("III");
    std::cout << dupa << "\n";
    return 0;
}
