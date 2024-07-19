#include <iostream>
#include <vector>
#include <cmath>

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


class Solution {

    public:
        TreeNode* sortedArrayToBST(const std::vector<int>& nums) {



           if(nums.size() != 0) { 
                int mid_itr = std::floor(nums.size() / 2);
                TreeNode* left = sortedArrayToBST(std::vector<int> (nums.begin(), nums.begin() + mid_itr));
                TreeNode* right = sortedArrayToBST(std::vector<int> (nums.begin() + mid_itr + 1, nums.end()));
                TreeNode* root = new TreeNode(nums[mid_itr], left, right);

            
                
                root->left = left;
                root->right = right;
                root->val = nums[mid_itr];

                return root;
        }

        return nullptr;
    }
};

//albo:
//if nums.begin() > nums.end() ret nullptr


// wez srodek
// srodek staje sie rootem
// wywolaj rekursywnie dla od poczatku do srodka i dla od srodka do konca
// jezeli jednoelementowa to zwroc tylko ten elemenet
// jezeli dwuelementowa to zwroc odpowiedni case
