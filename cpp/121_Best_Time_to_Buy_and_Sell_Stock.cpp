#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_so_far { prices[0] };
        int max_profit_so_far { 0 };

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < min_so_far) {
                min_so_far = { prices[i] };
            } else if (prices[i] - min_so_far > max_profit_so_far) {
                max_profit_so_far = { prices[i] - min_so_far };
            }
        }

        return max_profit_so_far;
    }
};

// idea:
// im iterating over the prices
// i hold the value of the buy day and of the maximum profit so far
// for every value, i can 
// 1. check if its cheaper than what is a min_so_far
// 2. is it better to buy, considering the fact that i hold the max_profit_so_far?
