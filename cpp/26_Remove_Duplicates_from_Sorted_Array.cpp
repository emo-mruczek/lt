#include <vector>
#include <iostream>

class Solution {
public:
    static int removeDuplicates(std::vector<int>& nums) {
        int k = 0; //number of unique elements
        int curr = nums[0]; //currently checking value
        int size = nums.size();
        //std::vector<int> temp;
        
        // the tab is sorted

        for (int i = 1; i < size; i++ ) {
            if (curr != nums[i]) {
               // temp.push_back(curr);
                k++;
                nums[k] = nums[i];
                curr = nums[i];
                
            } else {
                continue;
            }
        }

        //nums = temp;

        return k+1; 
    }
};

int main() {

    std::vector<int> test = {1, 1, 2};
    int size = 3;

    int res = Solution::removeDuplicates(test);

    std::cout << res << std::endl;

    for (int i = 0; i < res; i++ ) {
        std::cout << test[i] << " ";
    }

    std::cout << std::endl;
}
