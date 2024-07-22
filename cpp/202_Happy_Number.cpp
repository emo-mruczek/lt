#include <set>

class Solution {
private:
    int sum_digits(int n) {
        int sum{0};
        while (n > 0) {
            sum += (n % 10)*(n%10);
            n /= 10;
        }

    return sum;
    }

public:
    bool isHappy(int n) {
        std::set<int> generated_numbers;
        int generated_number{n};
        do {generated_numbers.insert(generated_number);
            generated_number = sum_digits(generated_number);
            
        } while (!generated_numbers.contains(generated_number) && generated_number != 1);

        if (generated_number == 1){
            return true;
        }

        return false;
    }
};
