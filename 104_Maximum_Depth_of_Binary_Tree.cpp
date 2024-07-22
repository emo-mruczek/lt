#include <iostream>
#include <algorithm>

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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int d_left { 0 }, d_right { 0 };

        if ( root->left != nullptr ) {
            d_left = maxDepth(root->left);
        }

        if ( root->right != nullptr ) {
            d_right = maxDepth(root->right);
        }

       // return std::max(std::initializer_list<int> {depth, d_left, d_right});
        return std::max(d_left + 1, d_right + 1);
    }
};

// even faster:
// if (!root) return 0;
// return std::max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
