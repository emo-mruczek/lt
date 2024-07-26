#include <vector>

class Solution {
public:
   static int removeDuplicates(std::vector<int>& nums) {
       int size = nums.size();
        int curr_slot { 0 };
        int curr_num { nums[0] };
        int counter { 1 };

        for (int i = 1; i < size; i++) {
            if (nums[i] == curr_num) {
                ++counter;
                if (counter > 2) {
                    if (!curr_slot) {
                        curr_slot = i;
                    }
                } else {
                    if (curr_slot) {
                        nums[curr_slot] = nums[i];
                        ++curr_slot;
                    }
                }
            } else {
                counter = { 1 };
                curr_num = {nums[i]};
                if (curr_slot) {
                    nums[curr_slot] = nums[i];
                    ++curr_slot;
                }
            }
        }

        if (!curr_slot) {
            curr_slot  = {size};
        }

        return curr_slot;
    }
};

/* omg i overcomplicated it
* better solution:
* int curr_ind { 1 };
* int counter { 1 };
* for(int i = 1; i < nums.size(); i++) {
*            if(nums[i] == nums[i - 1]) {
*                occur++;
*            } else {
*                occur = 1;
*            }
*            if(occurance <= 2) {
*               nums[index] = nums[i];
*                curr_ind++;
*            }
*        }
        return curr_ind;*/

int main() {
    std::vector<int> nums {1, 2, 2};
    int k {Solution::removeDuplicates(nums)};
}

//idea:
//its sorted, so iterate through it
//have a counter that would count number of occurences of a given number
//also have a variable that would hold current number
//pointer at the position that i would realocate numbers
//iterator pointer



