#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int candidate = -1;
        int counter = 0;
        int size = nums.size();
        
        for (int i = 0; i < size; ++i) {
            if (counter == 0) {
                candidate = nums[i];
                counter++;
            } else {
                if (nums[i] == candidate) {
                    counter++;
                } else {
                    counter--;
                }
            }
        }
    
        return candidate;

    }
};
//private:
 //   bool checkCandidate(std::vector<int>& nums, int candidate) {
 //       
 //   }
//};
