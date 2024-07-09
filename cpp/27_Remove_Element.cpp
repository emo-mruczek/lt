#include <vector>
#include <iostream>

// from the end
// 1. check wether a number is equal to val
// 2. if yes, remove it and bring the first non-value number (going from the end) to its position
// 3. if no, counter++, go further
class Solution {
public:
    static int removeElement(std::vector<int>& nums, int val) {
        int point = nums.size();
        int counter = 0;
        int iter = nums.size() - 1;

        while (iter > -1) {
            if (point == nums.size()) {
                if (nums[iter] == val) {
                    nums[iter] = 0;
                } else {
                    point = iter;
                    counter++;
                }
                iter--;
                continue;
            }

            if (nums[iter] == val) {
                //nums[iter].remove();
                nums[iter] = nums[point];
                nums[point] = 0;
                point--;
            } else {
                counter++;
            }

            iter--;
        }

        return counter;
    }
};

/*class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};*/

int main() {
    std::vector<int> vec = {3, 2, 2, 3};
    int val = 3;

    int res = Solution::removeElement(vec, val);

    std::cout << res << std::endl;

    for (int n : vec) {
        std::cout << n << " ";
    }

    std::cout << std::endl;

    return 0;
}
