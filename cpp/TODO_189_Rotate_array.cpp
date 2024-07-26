#include <vector>

class Solution {
public:
    static void rotate(std::vector<int>& nums, int k) {
        int size = { static_cast<int>(nums.size()) };
        int temp {};
        int place_to_switch {};
        int curr_place { 0 };
        int switched {nums[0]};
        int prev {};
        for (int i = 0; i < size; ++i) {
            place_to_switch = (curr_place + k) % (size);
            temp = nums[place_to_switch];
            nums[place_to_switch] = switched;
            prev = switched;
            switched = temp;
            curr_place = place_to_switch;
        }
    }
};

int main() {
    std::vector<int> nums {-1, -100, 3, 99};
    int k { 2 };

    Solution::rotate(nums, k);

}
