#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int a_it = 0, b_it = 0;
        while (a_it < m || b_it < n) {
        if (nums1[a_it] < nums2[b_it]) {
            a_it++;
        } else {
            nums1.pop_back();
            nums1.insert(nums1.begin() + a_it, nums2[b_it]);
            a_it++;
            b_it++;
        }
        }
    }
};
