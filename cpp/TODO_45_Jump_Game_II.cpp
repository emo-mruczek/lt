#include <vector>
#include <limits.h>

class Solution {
public:
    static int jump(std::vector<int>& nums) {
        int size {static_cast<int>(nums.size())};

        if (!size) return false;

        std::vector<int> min_jumps(size, INT_MAX);

        min_jumps[size - 1] = 0;

        for (int i = size - 2; i >= 0; --i) {
            int curr_num {nums[i]};
            if (!curr_num) {
                min_jumps[i] = false;
                continue;
            } //cuz we cannot jump further

            for (int j = 1; j <= curr_num && i+j < size; ++j) {
               if (can_jump[i+j]) {
                    can_jump[i] = true;
                    break;
                }
            }           
        }

        return min_jumps[size-1];
    }
};


