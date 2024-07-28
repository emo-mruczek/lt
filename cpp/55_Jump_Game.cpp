#include <vector>

class Solution {
public:
    static bool canJump(std::vector<int>& nums) {
        int size {static_cast<int>(nums.size())};

        if (!size) return false;

        std::vector<bool> can_jump(size, false);

        can_jump[size - 1] = true;

        for (int i = size - 2; i >= 0; --i) {
            int curr_num {nums[i]};
            if (!curr_num) {
                can_jump[i] = false;
                continue;
            } //cuz we cannot jump further

            for (int j = 1; j <= curr_num && i+j < size; ++j) {
               if (can_jump[i+j]) {
                    can_jump[i] = true;
                    break;
                }
            }           
        }

        return can_jump[0];
    }
};

// my idea
// dynamic
// have a tab with info for each position wether it can jump to the last index or not
// i iterate starting from the end - 1
//
//
//
// *skull emoji* apparently my solution is baaaaad xD
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int reachable = 0;
//        int n = nums.size();
//        for(int i = 0; i<n; i++){
//            if(i>reachable) return false;
//            reachable = max(reachable, nums[i]+i);
//        }
//        return true;
//    }
//};
//


