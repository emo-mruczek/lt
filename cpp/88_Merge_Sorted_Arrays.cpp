#include <vector>

/*class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int a_it = 0, b_it = 0;
        while (a_it < m || b_it < n) {
        if (a_it < m && nums1[a_it] < nums2[b_it] ) {
            a_it++;
        } else {
            nums1.pop_back();
            nums1.insert(nums1.begin() + a_it, nums2[b_it]);
            a_it++;
            b_it++;
        }
        }
    }
};*/

//rozwiazanie "od tylu", aby nie musiec jakos przepychac rzeczy czy cos
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int a_it = m - 1;
        int b_it = n - 1;
        int curr = m + n - 1;

        while (a_it >= 0 && b_it >= 0) {
            if (nums1[a_it] > nums2[b_it]) {
                nums1[curr] = nums1[a_it];
                curr--;
                a_it--;
            } else {
                nums1[curr] = nums2[b_it];
                curr--;
                b_it--;
            }
        }

        
            while (b_it >= 0) {
            nums1[curr] = nums2[b_it];
            curr--;
            b_it--;
        }
        }
};
