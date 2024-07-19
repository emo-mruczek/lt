#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> par;

        for (char c : s) {
            if (par.empty()) {
                par.push(c);
            } else {
                if (c == '{' || c == '(' || c == '[') {
                    par.push(c);
                } else {

                    if (par.empty()) {
                        return false;
                    }

                    char z = par.top();

                    if ((c == '}' && z == '{') || (c == ')' && z == '(') || (c == ']' && z == '[')) { 
                        par.pop();           
                    } else {
                        return false;
                    }
          }

        } }
        return par.empty();

    } 
};
